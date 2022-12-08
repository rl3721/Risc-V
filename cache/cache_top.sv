module Top #(
    parameter ADDRESS_WIDTH = 32
)(
    input logic clk,
    input logic [31:0] address,
    input logic WE,
    input logic [31:0] Data_WD,
    output logic [31:0] Data_RD,
    output logic [1:0] hit
);

logic [127:0] data_bus_read;
logic[127:0] data_bus_write;
logic[31:0] read_address_bus;
logic[31:0] write_address_bus;
logic Memory_WE;

cache Cache (
    .clk(clk),
    .WE(WE),
    .Data_addr(address),
    .Data_WD(Data_WD),
    .Memory_bus_in(data_bus_read),
    .Memory_bus_out(data_bus_write),
    .Memory_read_address(read_address_bus),
    .Memory_write_address(write_address_bus),
    .Memory_WE(Memory_WE),
    .Data_RD(Data_RD),
    .hit(hit)
);

data_ram ram (
    .clk(clk),
    .Data_WE(Memory_WE),
    .Data_read_addr(read_address_bus),
    .Data_write_addr(write_address_bus),
    .Data_WD(data_bus_write),
    .Data_RD(data_bus_read)
);

endmodule
