ldr r1,=a
mov r2,#0

loop:
cmp r2,#10
bge done
str r2,[r1],#4
add r2,r2,#1
b loop

done:
mov r0,#0
swi 0x11

.data
a: .byte 10
