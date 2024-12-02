Addressing Mode	Operand Location:
- `Immediate`	Operand is part of the instruction 
eg: MOV AX, 1234H  ; Move immediate value 1234H into AX

- `Register`	Operand is in a register
MOV AX, BX  ; Move the content of BX into AX

- `Direct`	Operand is in a specified memory location
MOV AX, [1234H]  ; Move the content of memory location 1234H into AX

- `Indirect`	Operand's address is in a register
MOV AX, [BX]     ; Move the content at the memory location pointed by BX into AX
MOV AX, [SI]     ; Move the content at the memory location pointed by SI into AX

- `Indexed`	Operand's address is calculated with an index
MOV AX, [BX+SI]  ; Effective address = BX + SI

- `Based`	Operand's address is relative to a base register
MOV AX, [BX+05H] ; Effective address = BX + 05H

- `Based-Indexed`	Combines base, index, and displacement
MOV AX, [BX+SI+05H] ; Effective address = BX + SI + 05H

- `Relative`	Address is relative to the instruction pointer
JMP SHORT LABEL ; Jump to a nearby location relative to the current instruction pointer

- `String`	Operands are strings in memory
MOVSB  ; Move string byte from memory location [SI] to [DI]

- `Implicit`	Operand is implied by the instruction
CWD  ; Convert word to doubleword; operates on AX implicitly
