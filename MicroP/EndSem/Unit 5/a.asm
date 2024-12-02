data segment
msg1 db 'hello$'
data ends
 
code segment
assume cs:code,ds:data
start:
mov ax,data
mov ds,ax
mov sp,0d00h
mov ah,09h
int 21h
mov ax,4c00h
int 21h
int 3
code ends
end start

