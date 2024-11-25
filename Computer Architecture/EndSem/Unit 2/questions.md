##  ADD Instruction
Control Signal	Value	Reason
RegDst	1	Destination register is specified in the rd field.
ALUOp	10	Specifies the "add" operation.
ALUSrc	0	Second operand comes from a register.
RegWrite	1	The result is written to the destination register.
MemWrite	0	No memory write is performed.
MemRead	0	No memory read is performed.
MemtoReg	0	Register value comes from the ALU.
