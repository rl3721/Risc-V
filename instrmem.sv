module instrmem #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32 
)(
    input logic  [ADDRESS_WIDTH-1:0]  A,
    output logic [DATA_WIDTH-1:0]  RD
);

logic [7:0] short_addr; //for this test where a memory of only 8
logic [7:0] rom_array [2**8-1:0]; //dont need the whole 2^32 at this stage

assign short_addr = A[7:0];

initial begin
        $display("Loading rom.");
        $readmemh("memory.mem", rom_array);
end;


always_comb
    RD = {rom_array [short_addr], 
            rom_array [short_addr + 1], 
            rom_array [short_addr + 2], 
            rom_array [short_addr + 3]}; 
endmodule
