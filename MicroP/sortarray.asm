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

; Program to sort 360 integers in descending order starting from address 2300H
; using Bubble Sort algorithm.

START:      LXI H, 2300H        ; Initialize HL register pair with base address 2300H
            MVI C, 0B4H         ; C = 0B4H (360 in decimal) - Total number of integers
OUTER_LOOP: MOV B, C            ; B = C (initialize inner loop counter with number of elements)
            DCR B               ; B = B - 1
            MVI E, 00H          ; Reset swap flag (E = 0)

INNER_LOOP: MOV A, M            ; Load current element (M) into Accumulator
            INX H               ; Point HL to the next element
            CMP M               ; Compare A (current element) with M (next element)
            JC NO_SWAP          ; If A < M, no swap needed, skip to NO_SWAP
            ; Swap elements
            MOV D, M            ; Store M (next element) in D temporarily
            MOV M, A            ; Store A (current element) in M (next position)
            DCX H               ; Point HL to previous element
            MOV M, D            ; Store D (original M) at previous position
            INX H               ; Point HL back to next position
            MVI E, 01H          ; Set swap flag (E = 1)
NO_SWAP:    DCR B               ; Decrement inner loop counter
            JNZ INNER_LOOP      ; If B ≠ 0, repeat inner loop

            DCR C               ; Decrement outer loop counter (reduce number of passes)
            MOV A, E            ; Check swap flag
            ORA A               ; If no swaps (E = 0), sorting is complete
            JZ END              ; Jump to END if sorted

            JNZ OUTER_LOOP      ; If outer loop counter (C) ≠ 0, repeat sorting

END:        HLT                 ; Halt the program after sorting is complete



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

