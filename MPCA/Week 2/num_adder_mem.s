ldrb r0,=a
ldrb r1,=b
ldrb r2,=c  @clueslss
ldrb r3,[r0]
ldrb r5,[r1]
add r4,r3,r5
strb r5,[r2]
swi 0x11

.data
a: .byte 1
b: .byte 2
c: .byte 3
