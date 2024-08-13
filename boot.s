[BITS 32]

.section .text
.global _start
.type _start, @function

_start:
    mov esp, stack_top

    call kernel_main

halt:
    cli
    hlt
    jmp halt

.section .bss
.align 16
stack_bottom:
.skip 16384          ; 16KB stack
stack_top:
