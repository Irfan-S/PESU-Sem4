ldr r5,=array1
mov r4,#10
mov r0,#0
mov r1,#1
mov r2,#0
loop:
	 add r2,r0,r1
	mov r0,r1
	mov r1,r2
	 strb r2,[r5]
	add r5,r5,#1
	subs r4,r4,#1
	bne loop
swi 0x11


.data
array1: .byte 0,0,0,0,0,0,0,0,0,0
