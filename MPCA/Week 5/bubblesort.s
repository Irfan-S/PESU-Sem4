
ldr   r0, =word1          @ r0 = &str
mov   r1, #0
ldr r3,=word2
ldr r4,[r3]

loop:   ldrb  r2, [r0], #1      @ r2 = *(r0++)
        cmp   r2,r4          @ if (r1 != nul)
        beq   adder

	cmp r2,#0
	beq stop
	b loop              @    goto loop

       
stop: swi 0x11   
	

adder:
	add r1,r1,#1
	b loop

.data
word1: .word 10,30,40,20
