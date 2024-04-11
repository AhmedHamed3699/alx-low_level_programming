global main
section .text

        main:
                mov rax,1
                mov rdi,1
                mov rsi,output_mess
                mov rdx,len
                syscall

                mov rax,60
                mov rdi,0
                syscall

section .data
        output_mess: db "Hello, Holberton", 10
        len: equ $-output_mess
