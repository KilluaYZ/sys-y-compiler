	.file	"test1.c"
	.text
	.globl	add
	.type	add, @function
add:
.LFB11:
	.cfi_startproc
	leal	(%rdi,%rsi), %eax
	ret
	.cfi_endproc
.LFE11:
	.size	add, .-add
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB12:
	.cfi_startproc
	subq	$4008, %rsp
	.cfi_def_cfa_offset 4016
	movl	$10, 888(%rsp)
	movl	$10, %esi
.L3:
	testl	%esi, %esi
	jle	.L4
	subl	$1, %esi
	cmpl	$5, %esi
	jne	.L3
.L4:
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	addq	$4008, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE12:
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
