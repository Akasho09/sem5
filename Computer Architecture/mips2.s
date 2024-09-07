; if (i==j) f= g+h else f=g-h ;
beq $s1 , $s2 
add $t0 , $s3, $s4
bne $s1 , $s2
sub $t0 , $s3, $s4

;or

bne $s1, $s2 , else
add $t0 , $s3, $s4
exit:
else:
sub $t0, $s2, $s4
exit:


;  x=x+A[i] i=i+1  ,where i is in  $s2 ,, A in $s1 , x in $s0

sll $t0, $s2 ,2
add $t0 , $t0 , $s1
add $s0 , $s0 , $t0
ADDI $s2 , $s2 , 1



;for (int  i = 0; i < n; i++) 
;     A[i]= A[i+1]

main:
li $t0 ,0

loop :
bne $t0 , $s1 , loop_end
addi $t0 , $t0 ,1
sll $t2 , $t0 ,2
add $t2 ,$t2, $s0

lw $t3 , 0($t2) 

loop_end:
exit: