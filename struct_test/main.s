	.file	"main.cpp"
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
	subq	$264, %rsp
	movl	$0, -4(%rbp)
	movl	$10, -64(%rbp)
	movl	$20, -60(%rbp)
	movl	$5, -56(%rbp)
	movl	$15, -52(%rbp)
	movl	$5, -48(%rbp)
	movl	$2, -44(%rbp)
	movl	$80, -40(%rbp)
	movl	$5, -36(%rbp)
	movl	$3, -32(%rbp)
	movl	$25, -112(%rbp)
	movl	$5, -108(%rbp)
	movl	$5, -104(%rbp)
	movl	$26, -100(%rbp)
	movl	$6, -96(%rbp)
	movl	$6, -92(%rbp)
	movl	$27, -88(%rbp)
	movl	$7, -84(%rbp)
	movl	$7, -80(%rbp)
	movl	$10, -160(%rbp)
	movl	$30, -156(%rbp)
	movl	$4, -152(%rbp)
	movl	$15, -148(%rbp)
	movl	$10, -144(%rbp)
	movl	$3, -140(%rbp)
	movl	$40, -136(%rbp)
	movl	$2, -132(%rbp)
	movl	$3, -128(%rbp)
	movl	$11, -208(%rbp)
	movl	$21, -204(%rbp)
	movl	$5, -200(%rbp)
	movl	$16, -196(%rbp)
	movl	$6, -192(%rbp)
	movl	$2, -188(%rbp)
	movl	$81, -184(%rbp)
	movl	$6, -180(%rbp)
	movl	$3, -176(%rbp)
	movl	$11, -256(%rbp)
	movl	$9, -252(%rbp)
	movl	$5, -248(%rbp)
	movl	$2, -244(%rbp)
	movl	$3, -240(%rbp)
	movl	$6, -236(%rbp)
	movl	$27, -232(%rbp)
	movl	$8, -228(%rbp)
	movl	$7, -224(%rbp)
	movl	$14, -304(%rbp)
	movl	$35, -300(%rbp)
	movl	$4, -296(%rbp)
	movl	$18, -292(%rbp)
	movl	$11, -288(%rbp)
	movl	$3, -284(%rbp)
	movl	$30, -280(%rbp)
	movl	$3, -276(%rbp)
	movl	$3, -272(%rbp)
	movl	$348548, -312(%rbp)
	movl	$262544, -308(%rbp)
	movl	$0, -8(%rbp)
	movl	$10, -12(%rbp)
	movl	$15, -16(%rbp)
	movq	$0, -384(%rbp)
	movq	$0, -376(%rbp)
	movq	$0, -368(%rbp)
	movq	$0, -360(%rbp)
	movq	$0, -352(%rbp)
	movq	$0, -344(%rbp)
	movq	$0, -336(%rbp)
	movq	$0, -328(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, -376(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
	.type	prog_pic.3064, @object
	.size	prog_pic.3064, 8
prog_pic.3064:
	.long	262528
	.long	262560
	.ident	"GCC: (GNU) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
