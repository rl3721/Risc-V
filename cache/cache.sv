module cache #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter BLOCK_SIZE = 4
)(
    input logic clk,
    input logic WE, //cpu writing to cache
    input logic [31 : 0] Data_addr,
    input logic [31 : 0] Data_WD, //Data write to cache from cpu
    input logic [127:0] Memory_bus_in, //data read from memory
    output logic [127:0] Memory_bus_out, //data write to memory, only one word needed for write through
    output logic [31:0] Memory_read_address, // address to memory for miss and write
    output logic [31:0] Memory_write_address,
    output logic Memory_WE,
    output logic [31:0] Data_RD, //data to cpu
    output logic [1:0] hit //00: miss, 10: hit on way one, 01: hit on way zero, 11: shouldn't happen treat as 00
);

logic [155:0] data_cache [1:0][7:0];
//V[1],U[1],D[1],tag[25],Data[4*32]
//2 ways, 8 sets
//V = 1 valid [155]
//U = 1 highest priority [154]
//D = 1 dirty [153] (unused in this)
//tag [152:128]

initial begin //initialize all flag bit to 000
    data_cache [0][0][155:153] = 3'b000;
    data_cache [0][1][155:153] = 3'b000;
    data_cache [0][2][155:153] = 3'b000;
    data_cache [0][3][155:153] = 3'b000;
    data_cache [0][4][155:153] = 3'b000;
    data_cache [0][5][155:153] = 3'b000;
    data_cache [0][6][155:153] = 3'b000;
    data_cache [0][7][155:153] = 3'b000;
    data_cache [1][0][155:153] = 3'b000;
    data_cache [1][1][155:153] = 3'b000;
    data_cache [1][2][155:153] = 3'b000;
    data_cache [1][3][155:153] = 3'b000;
    data_cache [1][4][155:153] = 3'b000;
    data_cache [1][5][155:153] = 3'b000;
    data_cache [1][6][155:153] = 3'b000;
    data_cache [1][7][155:153] = 3'b000;
    hit = 2'b00;
    replace = 1'b0;
end 

logic replace; //determine which way should be replaced

always_comb begin //the control bit
    if (data_cache[0][Data_addr[6:4]][155] & (data_cache[0][Data_addr[6:4]][152:128] == Data_addr[31:7]))
        begin 
            hit = 2'b01;
        end
    else if (data_cache[1][Data_addr[6:4]][155] & (data_cache[1][Data_addr[6:4]][152:128] == Data_addr[31:7]))
        begin
            hit = 2'b10;
        end
    else
        begin
            if (~data_cache[0][Data_addr[6:4]][154]) replace = 1'b0;
            else replace = 1'b1;
            hit = 2'b00;
        end
end

logic [127:0] block_out;

always_comb begin //reading
    case (hit)
        2'b01: begin
            data_cache[0][Data_addr[6:4]][154] = 1'b1;
            data_cache[1][Data_addr[6:4]][154] = 1'b0;
            block_out = data_cache[0][Data_addr[6:4]][127:0];
            case(Data_addr[3:2])
                2'b00: Data_RD = block_out[31:0];
                2'b01: Data_RD = block_out[63:32];
                2'b10: Data_RD = block_out[95:64];
                2'b11: Data_RD = block_out[127:96];
            endcase
        end

        2'b10: begin
            data_cache[0][Data_addr[6:4]][154] = 1'b0;
            data_cache[1][Data_addr[6:4]][154] = 1'b1;
            block_out = data_cache[1][Data_addr[6:4]][127:0];
            case(Data_addr[3:2])
                2'b00: Data_RD = block_out[31:0];
                2'b01: Data_RD = block_out[63:32];
                2'b10: Data_RD = block_out[95:64];
                2'b11: Data_RD = block_out[127:96];
            endcase
        end

        default: begin 
        //act as fetching from main memory, update of cache done synchronous
            Memory_read_address = Data_addr;
            block_out = Memory_bus_in;
            case(Data_addr[3:2])
                2'b00: Data_RD = block_out[31:0];
                2'b01: Data_RD = block_out[63:32];
                2'b10: Data_RD = block_out[95:64];
                2'b11: Data_RD = block_out[127:96];
            endcase
        end
    endcase
end

always_ff @(posedge clk) begin
    case(hit)
        2'b01: begin //writing to cache
            Memory_WE <= 1'b0;
            if (WE) begin
                case(Data_addr[3:2])
                    2'b00: data_cache[0][Data_addr[6:4]][31:0] <= Data_WD;    
                    2'b01: data_cache[0][Data_addr[6:4]][63:32] <= Data_WD;
                    2'b10: data_cache[0][Data_addr[6:4]][95:64] <= Data_WD;
                    2'b11: data_cache[0][Data_addr[6:4]][127:96] <= Data_WD;
                endcase
                data_cache[0][Data_addr[6:4]][154:153] <= 2'b11; //setting dirty bit to 1
                data_cache[1][Data_addr[6:4]][154] <= 1'b0;
            end
        end
        2'b10: begin //writing to cache
            Memory_WE <= 1'b0;
            if (WE) begin
                case(Data_addr[3:2])
                    2'b00: data_cache[1][Data_addr[6:4]][31:0] <= Data_WD;    
                    2'b01: data_cache[1][Data_addr[6:4]][63:32] <= Data_WD;
                    2'b10: data_cache[1][Data_addr[6:4]][95:64] <= Data_WD;
                    2'b11: data_cache[1][Data_addr[6:4]][127:96] <= Data_WD;
                endcase
                data_cache[1][Data_addr[6:4]][154:153] <= 2'b11;
                data_cache[0][Data_addr[6:4]][154] <= 1'b0;
            end
        end
        default: begin 
            if (data_cache[replace][Data_addr[6:4]][153]) begin //writeback to main memory
                Memory_bus_out <= data_cache[replace][Data_addr[6:4]][127:0];
                Memory_write_address <= {data_cache[replace][Data_addr[6:4]][152:128],
                                        Data_addr[6:4],4'b0};
                Memory_WE <= 1'b1;
            end
            else Memory_WE <= 1'b0;
            data_cache[replace][Data_addr[6:4]] <= {3'b110, Data_addr[31:7], Memory_bus_in}; //updating cache
            data_cache[~replace][Data_addr[6:4]][154] <= 1'b0; //updating the replace bit in other way
            if (WE) begin
                case(Data_addr[3:2])
                    2'b00: data_cache[replace][Data_addr[6:4]][31:0] <= Data_WD;    
                    2'b01: data_cache[replace][Data_addr[6:4]][63:32] <= Data_WD;
                    2'b10: data_cache[replace][Data_addr[6:4]][95:64] <= Data_WD;
                    2'b11: data_cache[replace][Data_addr[6:4]][127:96] <= Data_WD;
                endcase
                data_cache[replace][Data_addr[6:4]][153] <= 1'b1;
            end
        end
    endcase
end

endmodule
