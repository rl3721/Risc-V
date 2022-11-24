module ALU #(
    parameter WIDTH = 32
)(  
    input logic [WIDTH -1:0] d0,
    input logic [WIDTH -1:0] d1,
    input logic [2:0] ALUctrl,
    output logic [WIDTH -1:0] dout,
    output logic EQ
);

logic cout;

always_comb begin
    if (d0 == d1) EQ = 1'b1;
    else EQ = 1'b0;
    case (ALUctrl)
        3'b000: dout = d0 + d1;
        3'b001: dout = d0 - d1;
        3'b010: dout = d0 & d1;
        3'b011: dout = d0 | d1;
        3'b101: dout = ( d0 < d1);
    endcase
end
endmodule
