global main

section .text
main:
	mov rax, 1		; syscall number for write
	mov rdi, 1		; file descriptor 1 (stdout)
	mov rsi, msg		; address of the string
	mov rdx, 13		; length: "Hello, World" + newline
	syscall
	xor eax, eax		; return 0
	ret

section .data
msg:	db "Hello, World", 10

section .note.GNU-stack noalloc noexec nowrite progbits
