ldr r0,=array1
mov r1,#10
mov r2,#0

loop: ldrb r3,[r0]
	add r2,r3,r2
	add r0,r0,#1
	subs r1,r1,#1
	bne loop
swi 0x11

.data
array1: .byte 1,2,3,4,5,6,7,8,9,10
