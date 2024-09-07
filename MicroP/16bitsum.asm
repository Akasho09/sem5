MVI C,00  ;carry=0 
LHLD 0000H  ; LOAD L&H with 0000 & 0001
XCHG  ; exchange LH with DE
LHLD 0002H ;  load again LH
DAD D ; add LH & CD at H,L
JNC jmpp ; jmp if no carry
INR C ; incremet carry if carry
jmpp: SHLD 0005H ; store H,L at 0005,0006
MOV A,C
STA 0004H ; carry store
HLT