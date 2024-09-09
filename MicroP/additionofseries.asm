;Addition of series of numbers hexadecimal 
MVI C,7  ; count = no of numbers to add
MVI A,00  ; accumulator=0
LXI H, 0001H ; load HL with address 0001
J1: MOV D,M ; loop load 0001 into D
ADD D ; Add D to Accumulator
INX H ; increment HL
DCR C ; decrement C
JNZ J1 ; Jump if not zero C to j1
STA 0020H ; store accumulator =sum 
HLT