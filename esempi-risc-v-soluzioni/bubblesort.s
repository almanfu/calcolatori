	.text
	.globl	bubblesort
	.type	bubblesort, @function

	.cfi_startproc
bubblesort: # a0 array[], a1 int n
	li	a7, 0 # c = 0
	addiw	a6, a1, -1 # a6 = n - 1
loop_1:
	bge	a7, a6, end_loop1
	li	a5, 0  # d = 0
	subw	a4, a6, a7 # n - c - 1
loop_2:
	bge	a5, a4, end_loop2
	slli	a3, a5, 2
	add	a3, a0, a3
	lw	a2, 0(a3)  # array[d]
	lw	t1, 4(a3)  # array[d+1]
	bge	t1, a2, no_swap
	sw	t1, 0(a3)
	sw	a2, 4(a3)
no_swap:
	addiw	a5, a5, 1
	j loop_2
end_loop2:
	addiw	a7, a7, 1
	j loop_1
end_loop1:
	ret
	.cfi_endproc
	.size bubblesort, .-bubblesort
