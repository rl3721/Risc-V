module controlunit(
    input logic EQ, 
    input logic [31:0] instr,
    output logic RegWrite,
    output logic [2:0] ALUctrl, //changeable depending on amt of ALU instr
    output logic ALUSrc, //high for all except R type
    output logic PCsrc, //high for B type, EQ AND BRANCH
    output logic [2:0] ImmSrc,
    output logic ResultSrc, //determined by signextend unit
    output logic MemWrite
);

logic [2:0] funct3;
logic [1:0] ALUop;

assign funct3 = instr[14:12];
assign  ALUop = instr[1:0];


//main decoder

always_comb begin
case (instr[6:0]) //opcode
    7'b11       :   if (funct3 == 3'b010) //lw
                        begin 
                            RegWrite = 1'b1;
                            ALUSrc = 1'b1;
                            ImmSrc = 3'b0;
                            PCsrc = 0'b0;
                            ResultSrc = 1'b1; 
                            MemWrite = 1'b1;
                        end
    
    7'b0010011  :   if (funct3 == 3'b000) //addi
                        begin
                            RegWrite = 1'b1;
                            ALUSrc = 1'b1;
                            ImmSrc = 3'b0;
                            PCsrc = 1'b0;
                            ResultSrc = 1'b0;
                            MemWrite = 1'b0; 
                        end
    7'b1100011  :  begin if (funct3 == 3'b0) //beq
                        begin
                            RegWrite = 1'b0;
                            ALUSrc = 1'b1;
                            ImmSrc = 3'b11;
                            PCsrc = EQ; 
                            ResultSrc = 1'b0;
                            MemWrite = 1'b0; 
                        end
                    if (funct3 == 3'b1) //bne
                        begin
                            RegWrite = 1'b0;
                            ALUSrc = 1'b1;
                            ImmSrc = 3'b11;
                            PCsrc = ~EQ;
                            ResultSrc = 1'b0;
                            MemWrite = 1'b0; 
                        end
    end

endcase end

//ALU decoder

always_comb begin
case (ALUop)
    2'b0     :  ALUctrl = 3'b0; //lw,sw add
    2'b01    :  ALUctrl = 3'b1; //beq subtract
    2'b10    :  ALUctrl = 3'b0; //add
endcase end
endmodule
