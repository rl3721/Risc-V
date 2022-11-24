module signextend #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATAWIDTH-1:0] instr,
    input logic [2:0] ImmSrc, //must be 3 bit as there are 5 differnet types of instructions
    output logic [31:0] ImmOp 
)

    case(ImmSrc) //different ImmSrc for the 5 different risc-v instruction types
        2'b0    : assign ImmOp = {20{instr[31]}, instr[31:20]}; //immedate
        2'b01   : assign ImmOp = {20{instr[31]}, instr[31:25], instr[11:7]} // store
        3'b11   : assign ImmOp = {20{instr[31]}, instr[7], instr[30:25], instr[30:25], instr[11:8], 1'b0} //branch
    endcase

endmodule


    


    


