ldr r0,=array1
mov r1,#10
mov r2,#9
mov r4,#-1

loop: ldrb r3,[r0]
	cmp r3,r2
	beq found
	add r0,r0,#1
	add r4,r4,#1
	subs r1,r1,#1
	bne loop
mov r4,#-1
swi 0x11

found:
	add r4,r4,#1
	swi 0x11

.data
array1: .byte 1,2,3,4,5,6,7,8,9,10
