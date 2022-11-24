module counter_unit #(
    parameter PC_WIDTH = 32 // bit of PC
)(
    input  logic clk,
    input  logic rst,
    input  logic PCsrc, //branch or increment
    input  logic [PC_WIDTH-1:0] ImmOp, //offset of branch
    output logic [PC_WIDTH-1:0] PC
);

logic [PC_WIDTH-1:0] inc_PC;
logic [PC_WIDTH-1:0] branch_PC;

assign branch_PC = PC + ImmOp; //compute branch_pc
assign inc_PC = PC + 32'h4;

logic [PC_WIDTH-1:0] next_PC;
assign next_PC = PCsrc? inc_PC :branch_PC;

always_ff @ (posedge clk) begin
  if (rst) PC <= {PC_WIDTH{1'b0}};
  else PC <= next_PC;
end

endmodule
