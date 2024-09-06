add $t0 , $s1 , $s2   ; add s1, s2 to t0

sll $s2 , $t3 , 2   ; shift left t3 by 2 and store in s2

lw $t0 , 4($s3)    ; move data  -to t0 reg -from $s3+4

sw $t0 , 4($s3)     ; copied -from , -to

ADDI $6, $1, #10   ; add immediate 

; g=h+A[8]  where g is in $s1 , h in $s2 & base addr of A in $s3
lw $t0 , 32($s3) ; 4*8=32  if it would have been variable , we left shift by 2
add $s1 , $s2 , $t0


; while(save[i]==k) i+=1 ; where i is in  $s3 , base addr of save = $s6 , k in $s5

loop:
sll $t0 , $s3 , 2
add $t1 , $t0 , $s6
lw $t2 , 0($t1)
bne $t2 , $s5 exit
add $s3 , $s3 , 1
j loop

exit:

