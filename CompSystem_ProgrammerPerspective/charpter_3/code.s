	.build_version macos, 26, 0	sdk_version 26, 5
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_sum                            ; -- Begin function sum
	.p2align	2
_sum:                                   ; @sum
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	w1, [sp, #8]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #8]
	add	w8, w8, w9
	str	w8, [sp, #4]
	ldr	w10, [sp, #4]
	adrp	x9, _accum@PAGE
	ldr	w8, [x9, _accum@PAGEOFF]
	add	w8, w8, w10
	str	w8, [x9, _accum@PAGEOFF]
	ldr	w0, [sp, #4]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_accum                          ; @accum
.zerofill __DATA,__common,_accum,4,2
.subsections_via_symbols
