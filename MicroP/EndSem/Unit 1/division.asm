; DIVISION WITH REPEATED SUBTRACTION
LXI H,1000H
MOV A,M ; divident
INX H
MOV B,M
MVI C,00H
loop: CMP B; IF B>A
      JC end
      INR C
      SUB B
      JMP loop
end:  INX H
      MOV M,C
      INX H
      MOV M,A ;  REMAINDER
HLT

