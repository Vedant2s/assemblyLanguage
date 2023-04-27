.model small
.stack 100H
.data
arr db 1H,2H,3H,4H
sum dw 0
.code
mov ax,@data
mov ds,ax
mov ax,00H
lea si,arr
repeat:	add ax,[bx]
	inc bx
	dec cx
	jnz repeat
	mov sum,ax
	int 3
	end