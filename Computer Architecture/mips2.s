loop:
sll $t0 , $s3 , 2
add $t1 , $t0 , $s6
lw $t2 , 0($t1)
bne $t2 , $s5 exit
add $s3 , $s3 , 1
j loop

exit: