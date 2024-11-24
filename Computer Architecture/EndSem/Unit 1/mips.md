## MIPS functions 





MIPS (Microprocessor without Interlocked Pipelined Stages) :
is a family of reduced instruction set computer (RISC) instruction set architectures (ISA)
developed by MIPS Computer Systems, now MIPS Technologies, based in the United States.

1. MIPS Register file:
There are 32 registers that we commonly use. Each is 32 bits wide. 
The registers are identified by a integer, numbered 0 - 31.
To reference a register as an operand, use the syntax
$x, where x is the number of the register you want.
examples: $12, $15

- $0
is 0 (use as needed)
- $1
is used by the assembler (the simulator in our case) -- do not use it in your programs.
- $2 & $3
return values from functions.
- $26-27
Used to implement the mechanism for calling special procedures that do I/O and take care of other error conditions (like overflow)
- $29
is a stack pointer -- you are automatically allocated a stack (of words), and $29 is initialized to contain the address of the empty word at the top of the stack at the start of any program.
Instruction Format and Syntax
- $31 
return address

2. Memory:
'4GB'. Each memory loaction is 8 bits 
4 memory loaction store a single data from a register.

3. Instruction Format and Syntax
mnemonic number     operands      C or C++ or Java
         of operands

move       2        d, s1         d = s1;
add        3        d, s1, s2     d = s1 + s2; two's complement
addu       3        d, s1, s2     d = s1 + s2; unsigned
sub        3        d, s1, s2     d = s1 - s2; two's complement
subu       3        d, s1, s2     d = s1 - s2; unsigned
mul        3        d, s1, s2     d = s1 * s2; two's complement
div        3        d, s1, s2     d = s1 / s2;  gives quotient
divu       3        d, s1, s2     d = s1 / s2;  gives quotient
rem        3        d, s1, s2     d = s1 % s2;  gives remainder
remu       3        d, s1, s2     d = s1 % s2;  gives remainder
and        3        d, s1, s2     d = s1 & s2; bitwise AND
or         3        d, s1, s2     d = s1 | s2; bitwise OR
not        2        d, s1         d = ~s1;  bitwise complement
nand       3        d, s1, s2     d = s1 NAND s2; no C equivalent
nor        3        d, s1, s2     d = s1 NOR s2; no C equivalent
xor        3        d, s1, s2     d = s1 ^ s2; bitwise XOR
rol        3        d, s1, s2     d = rotate left of s1 by s2 places
ror        3        d, s1, s2     d = rotate right of s1 by s2 places
sll        3        d, s1, s2     d = logical left shift of s1 by s2 places
sra        3        d, s1, s2     d = arithmetic right shift of s1 by s2 places
srl        3        d, s1, s2     d = logical right shift of s1 by s2 places


     move  $4, $9        # copy contents of $9 into $4

      mul   $12, $13, $14 # place 32-bit product of $13 and $14 into $12
                          # does not work correctly if result requires
                          # more than 32 bits

      add   $8, $9, $10   # two's complement sum of $9 and $10 placed in $8

      add   $20, $20, 1   # add (immediate value) 1 to the value in $20,
                          # result goes to $20
 
 
3 types of MIPS instructions:
 a). R-type.
 b). I-type.
 c). J-type.

1. For the R-type instruction  => operand = 000000
there are six components.
Operation code  -6 bits
First source register -5
Second source register -5
Destination register -5
Shift amount -5
Function bits -6


Function bits	Binary representative
ADD  100000
SUB  100010
AND  100100
OR   100101
SLT  101010

e.g ~SUB $2, $8, $3  ===  000000 01000 00011 00010 00000 100010   ---> Subtract the contents of $3 from $8 and store it in $2


2. I-type:

Opcode  31st to 26th  --6 bits
Source register  21st to 25th --5
Destination register 16th to 20th --5
Immediate data  0th to 15th  --16 bits  -- offset value,

e.g ~lw $t0 , 4($s3)  ---load data at $s3+4 to t0 reg  ==== 000110 10001 01000 00000000000000100

~ ADDI $6, $1, #10   =====   001000 00001 00110 0000000000001010



3. J-type : jump
6-bits operand  26 bits address 

e.g  ~ J 10000 is represented as  ===== xxxxxx 00000000000000000000001110  --jump to 14
jal (jump and link )  : stores address of next instruction and jumps  xxxxxx 00000000000000000000001110  ---diff operand only
The jr (Jump Register) instruction in MIPS assembly is used to jump to an address contained in a register. 
jr $register  ---- after jal



"MIPS Instruction Execution ":
1. Single cycle Execution:
Each MIPS instruction is executed in 1 fixed clock cycle.
slowest cycle is chosen . so there is time wastage .


2. Multi - Cycle Execution:
| Fetch | Decode | Execute | Memory | WriteBack 
but memory part takes more time than others .

3. Pipelining :
parellel overlapping multicycle .
maximum resource utilization.

| Fetch | Decode | Execute | Memory | WriteBack 
        | Fetch | Decode | Execute | Memory | WriteBack 
                | Fetch | Decode | Execute | Memory | WriteBack .


               https://www.youtube.com/watch?v=tSHPMMcxmio&list=PLOq2ARxtuVPiBd5oPNXLZMd12QSumFMDw&index=2
