@add 64bit num
@find smoll in array
@find fact using subroutine
@matric mul
@mul(add(a,b),c)


ldr r0,=val2
ldr r1,[r0]
ldr r2,[r0,#4]
ldr r0,=val2
ldr r3,[r0]
ldr r4,[r0,#4]
adds r6,r2,r4
adc r5,r1,r3
ldr r0,=res
str r5,[r0]
str r6,[r0,#4]
swi 0x11

.data
val1: .word 1
val2: .word 2
res: .word 0
