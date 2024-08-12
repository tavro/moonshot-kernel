section .multiboot
align 4

multiboot_header:
    dd 0xe85250d6
    dd 0
    dd - (multiboot_header + 0x4)
    dd 0
    dd 0
    dd 0
    dd 0
    dd 0
    dd 0
    dd 0
    dd 0
    dd 0