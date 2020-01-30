mov r0,#-1

cmp r0,#0
beq iszero
bgt ispos
blt isneg

iszero:
mov r1,#0
swi 0x11

isneg:
mov r1,#-1
swi 0x11

ispos:
mov r1,#1
swi 0x11
