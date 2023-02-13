	.file	"prime.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	_Z10squarerootf
	.type	_Z10squarerootf, @function
_Z10squarerootf:
.LFB1522:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -20(%rbp)
	movss	-20(%rbp), %xmm0
	movss	%xmm0, -12(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -8(%rbp)
	movss	.LC1(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
.L4:
	movss	-12(%rbp), %xmm0
	subss	-8(%rbp), %xmm0
	comiss	-4(%rbp), %xmm0
	jbe	.L7
	movss	-12(%rbp), %xmm0
	addss	-8(%rbp), %xmm0
	movss	.LC2(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-20(%rbp), %xmm0
	divss	-12(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
	jmp	.L4
.L7:
	movss	-12(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1522:
	.size	_Z10squarerootf, .-_Z10squarerootf
	.globl	_Z7isPrimei
	.type	_Z7isPrimei, @function
_Z7isPrimei:
.LFB1523:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$24, %rsp
	movl	%edi, -20(%rbp)
	movl	$2, -4(%rbp)
.L12:
	cvtsi2ssl	-4(%rbp), %xmm1
	movss	%xmm1, -24(%rbp)
	cvtsi2ssl	-20(%rbp), %xmm0
	call	_Z10squarerootf
	comiss	-24(%rbp), %xmm0
	setnb	%al
	testb	%al, %al
	je	.L9
	movl	-20(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L10
	movl	$1, %eax
	jmp	.L11
.L10:
	addl	$1, -4(%rbp)
	jmp	.L12
.L9:
	movl	$0, %eax
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1523:
	.size	_Z7isPrimei, .-_Z7isPrimei
	.section	.rodata
	.align 8
.LC3:
	.string	"Enter the number to check if the number is prime or not\n"
.LC4:
	.string	" is prime number\n"
.LC5:
	.string	" is not prime\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1524:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	_Z7isPrimei
	testl	%eax, %eax
	sete	%al
	testb	%al, %al
	je	.L14
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC4(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	jmp	.L15
.L14:
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC5(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
.L15:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L17
	call	__stack_chk_fail@PLT
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1524:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2008:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L20
	cmpl	$65535, -8(%rbp)
	jne	.L20
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L20:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2008:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z10squarerootf, @function
_GLOBAL__sub_I__Z10squarerootf:
.LFB2009:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2009:
	.size	_GLOBAL__sub_I__Z10squarerootf, .-_GLOBAL__sub_I__Z10squarerootf
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z10squarerootf
	.section	.rodata
	.align 4
.LC0:
	.long	1065353216
	.align 4
.LC1:
	.long	897988541
	.align 4
.LC2:
	.long	1073741824
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
