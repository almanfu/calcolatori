	.text
	.globl	trova_elemento
	.type	trova_elemento, @function

	.cfi_startproc

trova_elemento: # a0 = A, a1 = n, a2 = v
	li	a5, 0 # i = 0
loop:	bge 	a5, a1, end_l
	slli	a4, a5, 2  # offset per A[i]
	add	a4, a0, a4 # &A[i]
	lw	a4, 0(a4)
	beq	a4, a2, end
	addiw	a5, a5, 1
	j loop
end_l:
	li a5, -1
end:
	mv a0, a5
        ret

	.cfi_endproc
	.size trova_elemento, .-trova_elemento
