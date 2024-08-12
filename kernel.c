#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "font.h"

struct framebuffer {
    uint32_t *base_addr;
    uint32_t width;
    uint32_t height;
    uint32_t pitch;
    uint8_t bpp;
} framebuffer;

size_t terminal_row;
size_t terminal_column;
uint32_t terminal_color;

void putpixel(uint32_t x, uint32_t y, uint32_t color) {
    uint32_t *pixel = framebuffer.base_addr + y * (framebuffer.pitch / sizeof(uint32_t)) + x;
    *pixel = color;
}

void clear_screen(uint32_t color) {
    for (size_t y = 0; y < framebuffer.height; y++) {
        for (size_t x = 0; x < framebuffer.width; x++) {
            putpixel(x, y, color);
        }
    }
}

void draw_char(char c, size_t x, size_t y, uint32_t color) {
    const uint8_t *glyph = font[(int)c];
    for (size_t i = 0; i < FONT_HEIGHT; i++) {
        for (size_t j = 0; j < FONT_WIDTH; j++) {
            if (glyph[i] & (1 << j)) {
                putpixel(x + j, y + i, color);
            }
        }
    }
}

void scroll() {
    size_t bytes_per_pixel = framebuffer.bpp / 8;
    size_t line_size = framebuffer.pitch * FONT_HEIGHT;

    for (size_t y = 0; y < framebuffer.height - FONT_HEIGHT; y++) {
        uint32_t *dest = framebuffer.base_addr + (y * framebuffer.pitch) / sizeof(uint32_t);
        uint32_t *src = framebuffer.base_addr + ((y + FONT_HEIGHT) * framebuffer.pitch) / sizeof(uint32_t);
        for (size_t x = 0; x < framebuffer.pitch / sizeof(uint32_t); x++) {
            dest[x] = src[x];
        }
    }

    uint32_t *last_line = framebuffer.base_addr + ((framebuffer.height - FONT_HEIGHT) * framebuffer.pitch) / sizeof(uint32_t);
    for (size_t x = 0; x < framebuffer.pitch / sizeof(uint32_t); x++) {
        last_line[x] = 0;
    }
}

void terminal_initialize(void) {
    terminal_row = 0;
    terminal_column = 0;
    terminal_color = 0xFFFFFFFF;
    clear_screen(0x00000000);
}

void terminal_setcolor(uint32_t color) {
    terminal_color = color;
}

void terminal_putchar(char c) {
    if (c == '\n') {
        terminal_column = 0;
        terminal_row += FONT_HEIGHT;

        if (terminal_row + FONT_HEIGHT >= framebuffer.height) {
            scroll();
            terminal_row = framebuffer.height - FONT_HEIGHT;
        }

        return;
    }

    draw_char(c, terminal_column, terminal_row, terminal_color);
    terminal_column += FONT_WIDTH;

    if (terminal_column + FONT_WIDTH >= framebuffer.width) {
        terminal_column = 0;
        terminal_row += FONT_HEIGHT;

        if (terminal_row + FONT_HEIGHT >= framebuffer.height) {
            scroll();
            terminal_row = framebuffer.height - FONT_HEIGHT;
        }
    }
}

void terminal_write(const char* data, size_t size) {
    for (size_t i = 0; i < size; i++) {
        terminal_putchar(data[i]);
    }
}

void terminal_writestring(const char* data) {
    terminal_write(data, strlen(data));
}

void kernel_main(uint32_t magic, uint32_t addr) {
    struct multiboot_info *mbi = (struct multiboot_info *)addr;
    framebuffer.base_addr = (uint32_t *)mbi->framebuffer_addr;
    framebuffer.width = mbi->framebuffer_width;
    framebuffer.height = mbi->framebuffer_height;
    framebuffer.pitch = mbi->framebuffer_pitch;
    framebuffer.bpp = mbi->framebuffer_bpp;

    terminal_initialize();

    terminal_writestring("Hello, framebuffer World!\nThis is a new line.\nAnother line!\n");
}