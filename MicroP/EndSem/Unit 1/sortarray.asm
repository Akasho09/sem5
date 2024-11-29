MVI B, 5          ; outer loop count
BACK2: LXI H, 1000H ; pointer
MVI C, 5          ; inner loop count
BACK1: MOV A, M     ; A = 1st Number
       INX H        ; M = 2nd location
       CMP M        ; 1st - 2nd number
       JC SKIP      ; if 1st is bigger
       JZ SKIP      ; if both equal
       MOV D, M     ; D = 2nd No
       MOV M, A     ; 1st No is now at 2nd loc
       DCX H        ; M points to 1st loc
       MOV M, D     ; 2nd No is now at 1st loc
       INX H        ; M points to 2nd No
SKIP:  DCR C        ; decrement inner loop count
       JNZ BACK1    ; inner loop
       DCR B        ; decrement outer loop count
       JNZ BACK2    ; outer loop
       HLT

----

; LXI H , 0015H
; MOV C,M ;  outer loop counter 
; DCR C
; INX H
; outerloop: MOV B,C ; inner loop counter 
; innerloop: MOV D,M ; first num 
;            INX H
;            CMP D
;            JZ skip
;            MOV A,M
;            MOV M,D
;            DCR H
;            MOV M,A
;            INX H
; skip: INX H
;       DCR B
;       JNZ innerloop
; DCR C
; JNZ outerloop
; HLT