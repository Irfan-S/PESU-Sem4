mov r0,#10
mov r2,#1
mov r3,#1

loop:
	cmp r0,#0
	blne mul
	swi 0x11

mul:
	mul r3,r2,r0
	mov r2,r3
	sub r0,r0,#1
	b loop


