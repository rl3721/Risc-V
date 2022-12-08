module data_ram #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input logic                clk,
    input logic                Data_WE,
    input logic [31:0]  Data_read_addr,
    input logic [31:0]  Data_write_addr,
    input logic [127:0]   Data_WD,
    output logic  [127 : 0] Data_RD

);

logic [7:0] data_mem [2**20-1:0];

initial begin
        $display("Loading Data_mem.");
        $readmemh("data.mem", data_mem);
end;

always_comb begin
    Data_RD = {data_mem[Data_read_addr + 15], 
            data_mem[Data_read_addr + 14],
            data_mem[Data_read_addr + 13],
            data_mem[Data_read_addr + 12],
            data_mem[Data_read_addr + 11],
            data_mem[Data_read_addr + 10],
            data_mem[Data_read_addr + 9],
            data_mem[Data_read_addr + 8],
            data_mem[Data_read_addr + 7],
            data_mem[Data_read_addr + 6], 
            data_mem[Data_read_addr + 5], 
            data_mem[Data_read_addr + 4],
            data_mem[Data_read_addr + 3],
            data_mem[Data_read_addr + 2],
            data_mem[Data_read_addr + 1],
            data_mem[Data_read_addr]};
end

always_ff @(posedge clk)
    if (Data_WE) begin
        data_mem[Data_write_addr + 15] <= Data_WD[127:120];
        data_mem[Data_write_addr + 14] <= Data_WD[119:112];
        data_mem[Data_write_addr + 13] <= Data_WD[111:104];
        data_mem[Data_write_addr + 12] <= Data_WD[103:96];
        data_mem[Data_write_addr + 11] <= Data_WD[95:88];
        data_mem[Data_write_addr + 10] <= Data_WD[87:80];
        data_mem[Data_write_addr + 9] <= Data_WD[79:72];
        data_mem[Data_write_addr + 8] <= Data_WD[71:64];
        data_mem[Data_write_addr + 7] <= Data_WD[63:56];
        data_mem[Data_write_addr + 6] <= Data_WD[55:48];
        data_mem[Data_write_addr + 5] <= Data_WD[47:40];
        data_mem[Data_write_addr + 4] <= Data_WD[39:32];
        data_mem[Data_write_addr + 3] <= Data_WD[31:24];
        data_mem[Data_write_addr + 2] <= Data_WD[23:16];
        data_mem[Data_write_addr + 1] <= Data_WD[15:8];
        data_mem[Data_write_addr] <= Data_WD[7:0];
    end

endmodule

