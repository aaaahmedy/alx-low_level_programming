section .data
    hello_format db "Hello, Holberton,",0xa,0
    format db "%s",0

section .text
    global main
    extern printf

main:
    ; Push the address of the format string onto the stack
    push hello_format
    ; Call printf
    call printf
    ; Clean up the stack
    add rsp, 8

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall
