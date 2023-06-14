	.file	"1.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$3896, %rsp
	movl	$10, -3128(%rbp)
	movl	-3128(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L4:
	subl	$1, -4(%rbp)
	cmpl	$5, -4(%rbp)
	je	.L6
.L2:
	cmpl	$0, -4(%rbp)
	jg	.L4
	jmp	.L3
.L6:
	nop
.L3:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
