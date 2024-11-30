section .text
global add_two_numbers
add_two_numbers:
    mov eax, [esp + 4]   ; First parameter
    add eax, [esp + 8]   ; Add second parameter
    ret
