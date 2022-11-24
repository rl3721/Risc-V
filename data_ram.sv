module data_ram #(
    parameter ADDRESS_WIDTH = 32,
              DATA_WIDTH = 32
)(
    input logic                clk,
    input logic                Data_WE,
    input logic  [ADDRESS_WIDTH -1:0]  Data_addr,
    input logic [DATA_WIDTH -1:0]   Data_WD,
    output logic  [DATA_WIDTH -1:0] Data_RD

);


logic [7:0] data_mem [2**8-1:0];
logic [7:0] short_addr;
assign short_addr = Data_addr[7:0];

initial begin
        $display("Loading Data_mem.");
        $readmemh("data.mem", data_mem);
end;

always_comb begin
    Data_RD = {data_mem[short_addr+ 8'h3], 
    data_mem[short_addr+ 8'h2], 
    data_mem[short_addr+8'h1], 
    data_mem[short_addr]};
end

always_ff @(posedge clk)
    if (Data_WE) begin
    data_mem[short_addr + 3] <= Data_WD[31:24];
    data_mem[short_addr + 2] <= Data_WD[23:16];
    data_mem[short_addr + 1] <= Data_WD[15:8];
    data_mem[short_addr] <= Data_WD[7:0];
    end

endmodule
