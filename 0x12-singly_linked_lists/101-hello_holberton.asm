extern printf

section .data
	format db "Hello, Holberton" ,0
	new_line db 10,0

section .txt
	global main

main:
	mov rdi,format
	call printf

	mov rdi, format
	call printf

	mov rax, 60
	xor rdi, rdi
	syscall
