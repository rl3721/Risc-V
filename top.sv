module Top #(
    parameter  DATA_WIDTH = 32,
    parameter A_WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    output logic[31:0] a0,
    output logic [31:0] instr,
    output logic [31:0] PC,
    output logic PCsrc,
    output logic [31:0] ImmOp
);

/* all data path signals are defined at the output of 
components, and all control signals are defined at the
components which they control*/

// Program Counter Unit Signals
    //Data
    /////logic [31:0] PC;
    //Control
    //logic PCsrc;
// Instruction Memory
    //Data
    ///////logic [31:0] instr;
// Register Files
    //Data
    logic [31:0] RD1; 
    logic [31:0] RD2;
    //Control
    logic RegWrite; //write enable
// ALU
    //Data
    logic [31:0] ALUResult;
    logic EQ;
    //Control
    logic [2:0]  ALUctrl;

// Sign Extension Signals 
    //Data
    //logic [31:0] ImmOp;
    //Control
    logic [2:0] ImmSrc;

// ALU mux signals
    //Data
    logic [31:0] ALUop2;
    //Control
    logic ALUSrc;

//Writeback Mux 
    //Data
    logic [31:0] Result;
    logic ResultSrc;

// Data Ram Signals
    //Data
    logic [31:0] ReadData;
    //Control
    logic MemWrite;

counter_unit ProgramCounter (
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .PC(PC),
    .ImmOp(ImmOp)
);

instrmem Instruction(
    .A(PC),
    .RD(instr)
);

RegFile Register (
    .clk(clk),
    .AD1(instr[19:15]),
    .AD2(instr[24:20]),
    .AD3(instr[11:7]),
    .WE3(RegWrite),
    .WD3(Result),
    .RD1(RD1),
    .RD2(RD2),
    .a0(a0)
);

//ALUmux
assign ALUop2 = ALUSrc?ImmOp: RD2;

signextend Extend (
    .instr(instr),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

ALU ALU(
    .d0(RD1),
    .d1(ALUop2),
    .ALUctrl(ALUctrl),
    .EQ(EQ),
    .dout(ALUResult)
);

data_ram data_ram (
    .clk(clk),
    .Data_WE(MemWrite),
    .Data_addr(ALUResult),
    .Data_WD(RD2),
    .Data_RD(ReadData)
);

//Mux for result
assign Result = ResultSrc? ReadData:ALUResult;

controlunit Decode (
    .EQ(EQ),
    .instr(instr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUSrc(ALUSrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc),
    .MemWrite(MemWrite),
    .ResultSrc(ResultSrc)
);


endmodule
