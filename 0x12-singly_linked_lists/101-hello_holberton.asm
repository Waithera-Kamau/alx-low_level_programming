; Declare needed C functiona
	extern printf		; the C function, to be called

	section .data		; Data section, initialized variables
msg:	db "Hello, Holberton", 0; C string needs 0
fmt:	db "%s", 10, 0		; The printf format, "\n", '0'

	section .text		; Code section

	global main		; the std gcc entry point
main:				; the proglabel for the entry point
	push	rbp		; set up stack froame, must be alligned

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call	printf		; Call C function

	pop	rbp		; restore stack

	mov	rax,0		; normal, no error, return value
	ret			; return
