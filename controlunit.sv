module control_unit(
    input logic EQ, 
    input logic [31:0] instr,
    output logic RegWrite,
    output logic [2:0] ALUctrl, //changeable depending on amt of ALU instr
    output logic ALUSrc, //high for all except R type
    output logic PCSrc, //high for B type, EQ AND BRANCH
    output logic [2:0] ImmSrc,
    output logic ResultSrc, //determined by signextend unit
    output logic MemWrite
);

logic [2:0] funct3;
logic [1:0] ALUop;

assign funct3 = instr[14:12];
assign  ALUop = instr[1:0];


//main decoder

case (instr[6:0]) //opcode
    7'b11       :   if funct3 = 3'b010 //lw
                        begin 
                            assign RegWrite = 1'b1;
                            assign ALUSrc = 1'b1;
                            assign ImmSrc = 3'b0;
                            assign PCSrc = 0'b0;
                            assign ResultSrc = 1'b1; 
                            assign MemWrite = 1'b1;
                        end
    
    7'b0010011  :   if funct3 = 3'b000 //addi
                        begin
                            assign RegWrite = 1'b1;
                            assign ALUSrc = 1'b1;
                            assign ImmSrc = 3'b0;
                            assign PCSrc = 1'b0;
                            assign ResultSrc = 1'b0;
                            assign MemWrite = 1'b0; 
                        end
    7'b1100011  :  if funct3 = 3'b0 //beq
                        begin
                            assign RegWrite = 1'b0;
                            assign ALUSrc = 1'b1;
                            assign ImmSrc = 3'b11;
                            assign PCSrc = 1'b1 AND EQ; 
                            assign ResultSrc = 1'b0;
                            assign MemWrite = 1'b0; 
                        end
                    if funct3 = 3'b1 //bne
                        begin
                            assign RegWrite = 1'b0;
                            assign ALUSrc = 1'b1;
                            assign ImmSrc = 3'b11;
                            assign PCSrc = 1'b1 AND EQ;
                            assign ResultSrc = 1'b0;
                            assign MemWrite = 1'b0; 
                        end

endcase

//ALU decoder

case (ALUop)
    2'b0     :   assign ALUctrl = 3'b0 //lw,sw add
    2'b01    :   assign ALUctrl = 3'b1 //beq subtract
    2'b10    :   assign ALUctrl = 3'b0 //add





endcase



endmodule