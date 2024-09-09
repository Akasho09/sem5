;Addition of series of numbers hexadecimal 
MVI C,7  ; count = no of numbers to add
MVI A,00  ; accumulator=0
LXI D,00  ; 16 bit ANS=0
LXI H, 0001H ; load HL with address 0001
J1: MOV A,M ; loop load 0001 into accumulator
CPI 0  ; compare accumlator to zero => if -ve => carry=1
JC J2  ;  jump if zero ie negative number
ADD D ; Add D to Accumulator
MOV D,A  ; move accumator data to DE register ie ans
J2: INX H ; increment HL
DCR C ; decrement Count
JNZ J1 ; Jump if not zero C to j1
MOV A,D ; move ans to accumulator
STA 0020H ; store accumulator =sum 
HLT