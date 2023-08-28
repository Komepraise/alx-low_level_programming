
-global _start
-intel_syntax

-section .text:

_start:

	mov %eax, 0x1
	mov %ebx, 1
	lea %ecx, message
	mov %edx, 17
	int 0x80

	mov eax, 0x60
	mov ebx, 0
	int 0x80


-section .data:
	message:
	-ascii "Hello, Holberton\n"
	
