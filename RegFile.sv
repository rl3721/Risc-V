module RegFile #(
    parameter D_WIDTH = 32
    parameter A_WIDTH = 5
)(
    input logic clk,
    input logic [A_WIDTH-1:0] AD1,
    input logic [A_WIDTH-1:0] AD2,
    input logic [A_WIDTH-1:0] AD3,
    input logic [A_WIDTH-1:0] WE3,
    input logic [D_WIDTH-1:0] WD3,
    output logic [D_WIDTH-1:0] RD1,
    output logic [D_WIDTH-1:0] RD2,
    output logic [D_WIDTH-1:0] a0
)


reg [D_WIDTH-1:0] mem [0:2**A_WIDTH -1];
initial begin
    mem[0] <= 32'b0;
    end

always_comb begin
    RD1 <= mem[AD1];
    RD2 <= mem[AD2];
    a0 <= mem[10];
end

always_ff @( posedge clk ) begin 
    if (WE1) mem[AD3] <= WD3;  
end
endmodule
