	.file	"str.c"
	.section	.rodata
.LC0:
	.string	"bhargavi"
.LC1:
	.string	"%s"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$20, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$.LC0, -20(%ebp)
	subl	$12, %esp
	pushl	-20(%ebp)
	call	puts
	addl	$16, %esp
	movl	$6452078, -16(%ebp)
	subl	$12, %esp
	leal	-16(%ebp), %eax
	pushl	%eax
	call	puts
	addl	$16, %esp
	movl	-20(%ebp), %eax
	addl	$1, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %edx
	movl	-20(%ebp), %eax
	addl	$4, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	%eax, %edx
	movl	-20(%ebp), %eax
	addl	%edx, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC1
	call	printf
	addl	$16, %esp
	nop
	movl	-12(%ebp), %eax
	xorl	%gs:20, %eax
	je	.L2
	call	__stack_chk_fail
.L2:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
