; Write a program in assembly language of 8085 to arrange 360 integers stored at consecutive memory locations starting with address 2300H in descending order. 
;Program should be well documented
; bubble sort 
MVI B,360
LXI H,2300H
outerloop: MOV C,B 
innerloop: MOV A,M
INX H 
CMP H ; if [A] > [H] => SWAP 
JZ SKIP
MOV D,M ;SWAP
MOV M,A 
DCX H 
MOV M,D ;SWAP
INX H
SKIP: DCR C 
JNZ innerloop
DCR B
JNZ outerloop
HLT


; LXI H, 0000H
; L3: MOV B,M
; MOV C,B
; INX H
; L2: MOV A,M
; INX H
; MOV D,M
; CMP D
; JC L1(0013H)
; MOV M,A
; DCX H
; MOV M,B
; INX H
; L1: DCR C
; JNZ L2(0004H)
; DCR B
; JNZ L3(0001H)
; HLT


; MVI C,5
; MVI B,5
; LXI H,0000H
; loop1: INX H
; loop2: MOV A,M
; INX H
; MOV D,H
; CMP H
; JNZ j2
; ;swap
; DCX H
; MOV H,D
; INX H
; MOV H,A
; j2: DCX H
; DCR C
; JNZ loop2
; DCR B
; JNZ loop1
; HLT


; MVI C,5
; MVI B,5
; LXI H,0000H
; loop1: INX H
; loop2: MOV A,M
; INX H
; MOV D,H
; CMP H
; JNZ j2
; ;swap
; DCX H
; MOV A,M
; INX H
; MOV H,A
; MOV D,H
; j2: DCX H
; DCR C
; JNZ loop2
; DCR B
; JNZ loop1
; HLT

