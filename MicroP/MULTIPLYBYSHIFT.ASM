LHLD 0000H ; Load h,l
Mov E,L ; move l to e
MoV A,H ; move h to accum
LXI H,0000H ;
MVI D, 00H
MVI C,08H
BACK: RAR
JNC Next
DAD D
Next: XCHG
DAD H
XCHG
DCR C
JNZ BACK
SHLD 0010H
HLT