	.text
	.globl	merge_array
	.type	merge_array, @function

	.cfi_startproc

merge_array: # a0 = s1[], a1= n1, a2= s2[], a3 = n2, a4=d[], a5= n
	addw	a6, a1, a3 # n1 + n2
	bgt	a6, a5, end
	li	a7, 0   # j
	li	a6, 0	# i
	li	a5, 0   # k
loop_1:
	bge	a7, a1, end_loop1
	bge	a6, a3, end_loop1
	slli	t1, a6, 2
	add	t1, a0, t1
	lw	t3, 0(t1)   # s1[i]
	slli	t1, a7, 2
	add	t1, a2, t1
	lw	t1, 0(t1)   # s2[j]
	ble	t3, t1, copia_s1
copia_s2:
	addiw	a7, a7, 1
	slli	t3, a5, 2
	add	t3, a4, t3
	sw	t1, 0(t3)
	addiw	a5, a5, 1
	j loop_1
copia_s1:
	addiw	a6, a6, 1
	slli	t1, a5, 2
	add	t1, a4, t1
	sw	t3, 0(t1)
	addiw	a5, a5, 1
	j loop_1
end_loop1:

loop_2:
	bge 	a6, a1, end_loop2
	slli 	t1, a5, 2
	add 	t1, a4, t1
	slli	t3, a6, 2
	add	t3, a0, t3
	lw	t3, 0(t3)
	sw	t3, 0(t1)
	addiw	a6, a6, 1
	addiw	a5, a5, 1
	j loop_2
end_loop2:

loop_3:
	bge	a7, a3, end_loop3
	slli 	t1, a5, 2
	add	t1, a4, t1
	slli	t3, a7, 2
	add	t3, a2, t3
	lw	t3, 0(t3)
	sw	t3, 0(t1)
	addiw	a7, a7, 1
	addiw	a5, a5, 1
	j loop_3
end_loop3:
	mv	a0, a5
	ret
end:
	li a0, -1
	ret

	.cfi_endproc
	.size merge_array, .-merge_array
