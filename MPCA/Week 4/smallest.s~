

ldr r0,=array1
mov r1,#9
ldrb r3,[r0]
add r0,r0,#1
loop:
	ldrb r5,[r0]
	cmp r5,r3
	bllt smol
	add r0,r0,#1
	subs r1,r1,#1
	bne loop
	swi 0x11

smol:
	mov r3,r5
	mov r15,r14


.data
array1: .byte 21,22,43,4,35,26,17,8,59,11
	


