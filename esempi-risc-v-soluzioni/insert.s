	.text
	.globl	insert_ordered
	.type	insert_ordered, @function

	.cfi_startproc
insert_ordered: # A = a0, n = a1, max = a2, v = a3
	addiw	a4, a1, 1  # n + 1
	bgt	a4, a2, end
	li	a4, 0      # i = 0
loop_1:
	bge	a4, a1, end_loop1
	slli	a5, a4, 2
	add	a5, a0, a5 # &A[i]
	lw	a5, 0(a5)  # A[i]
	bgt	a5, a3, end_loop1
	addiw	a4, a4, 1
	j loop_1
end_loop1:
	addiw	a2, a1, -1 # j = n -1
loop_2:
	bgt 	a4, a2, end_loop2
	addi 	a5, a2, 1 # j + 1
	slli	a5, a5, 2
	add 	a5, a0, a5
	slli	a6, a2, 2
	add	a6, a0, a6
	lw	a6, 0(a6)
	sw	a6, 0(a5)
	addiw	a2, a2, -1
	j loop_2
end_loop2:
	slli	a4, a4, 2
	add	a4, a0, a4
	sw	a3, 0(a4)
	addiw	a2, a1, 1
end:
	mv a0, a2
	ret

	.cfi_endproc
	.size insert_ordered, .-insert_ordered
