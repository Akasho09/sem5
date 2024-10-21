; 8085 Program to multiply two 8-bit numbers using a subroutine.
; Input: 
;   Multiplicand at 2000H
;   Multiplier at 2001H
; Output:
;   16-bit Product at 2002H (Lower Byte) and 2003H (Higher Byte)

ORG 2000H        ; Start program at 2000H

; Load Multiplicand and Multiplier from Memory
LXI H, 2000H     ; HL points to address 2000H
MOV C, M         ; Load multiplicand into C
INX H            ; Point to multiplier (2001H)
MOV D, M         ; Load multiplier into D

; Initialize result registers to 0
MVI A, 00H       ; Clear A (used for lower byte of product)
MVI B, 00H       ; Clear B (used for higher byte of product)

; Call the multiplication subroutine
CALL MULTIPLY

; Store the 16-bit product in memory (2002H and 2003H)
LXI H, 2002H     ; HL points to address 2002H
MOV M, A         ; Store lower byte of product
INX H            ; Point to 2003H
MOV M, B         ; Store higher byte of product

HLT              ; End of program

; Subroutine to multiply two 8-bit numbers
MULTIPLY:
    MVI E, 08H       ; Loop counter (8 bits to process)

MULT_LOOP:
    MOV A, D         ; Load multiplier into A
    ANI 01H          ; Mask LSB to check if it is 1
    JZ SKIP_ADD      ; If LSB is 0, skip addition

    ; Add multiplicand to the product
    MOV A, M         ; Load current product's lower byte
    ADD C            ; Add multiplicand to the lower byte
    MOV M, A         ; Store result in lower byte
    JNC NO_CARRY     ; If no carry, skip incrementing higher byte

    INX H            ; Move to higher byte of product
    INR B            ; Increment higher byte (due to carry)
    DCX H            ; Restore original memory pointer

NO_CARRY:
    ; Shift the multiplicand left (multiply by 2)
    MOV A, C         ; Load multiplicand
    RLC              ; Rotate Left (shift left by 1 bit)
    MOV C, A         ; Store shifted multiplicand back in C

    ; Shift the multiplier right (divide by 2)
    MOV A, D         ; Load multiplier
    RRC              ; Rotate Right (shift right by 1 bit)
    MOV D, A         ; Store shifted multiplier back in D

    ; Decrement the loop counter
    DCR E            ; Decrement E (bit counter)
    JNZ MULT_LOOP    ; If not zero, repeat the loop

    RET              ; Return to the main program


