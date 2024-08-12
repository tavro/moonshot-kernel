#ifndef FONT_H
#define FONT_H

#include <stdint.h>

#define FONT_WIDTH 8
#define FONT_HEIGHT 8

static const uint8_t font[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // Space ' ' (0x20)
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00}, // Exclamation mark '!' (0x21)
    {0x6c, 0x6c, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00}, // Quotation mark '"' (0x22)
    {0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x6c, 0x00}, // Number sign '#' (0x23)
    {0x18, 0x7e, 0xd8, 0x7e, 0x1b, 0x7e, 0x18, 0x00}, // Dollar sign '$' (0x24)
    {0x62, 0x64, 0x08, 0x10, 0x26, 0x46, 0x00, 0x00}, // Percent sign '%' (0x25)
    {0x30, 0x48, 0x30, 0x70, 0xda, 0x8c, 0x76, 0x00}, // Ampersand '&' (0x26)
    {0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // Apostrophe '\'' (0x27)
    {0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00}, // Left parenthesis '(' (0x28)
    {0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00}, // Right parenthesis ')' (0x29)
    {0x00, 0x6c, 0x38, 0xfe, 0x38, 0x6c, 0x00, 0x00}, // Asterisk '*' (0x2A)
    {0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00}, // Plus sign '+' (0x2B)
    {0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00}, // Comma ',' (0x2C)
    {0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00}, // Hyphen '-' (0x2D)
    {0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00}, // Period '.' (0x2E)
    {0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00}, // Slash '/' (0x2F)

    // Digits '0'-'9' (0x30 - 0x39)
    {0x3c, 0x66, 0x6e, 0x76, 0x66, 0x66, 0x3c, 0x00}, // 0
    {0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00}, // 1
    {0x3c, 0x66, 0x06, 0x0c, 0x30, 0x60, 0x7e, 0x00}, // 2
    {0x3c, 0x66, 0x06, 0x1c, 0x06, 0x66, 0x3c, 0x00}, // 3
    {0x0c, 0x1c, 0x3c, 0x6c, 0xfe, 0x0c, 0x0c, 0x00}, // 4
    {0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00}, // 5
    {0x3c, 0x66, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00}, // 6
    {0x7e, 0x66, 0x06, 0x0c, 0x18, 0x18, 0x18, 0x00}, // 7
    {0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00}, // 8
    {0x3c, 0x66, 0x66, 0x3e, 0x06, 0x66, 0x3c, 0x00}, // 9

    {0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00}, // Colon ':' (0x3A)
    {0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x30, 0x00}, // Semicolon ';' (0x3B)
    {0x0c, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0c, 0x00}, // Less than '<' (0x3C)
    {0x00, 0x7e, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00}, // Equals '=' (0x3D)
    {0x30, 0x18, 0x0c, 0x06, 0x0c, 0x18, 0x30, 0x00}, // Greater than '>' (0x3E)
    {0x3c, 0x66, 0x06, 0x0c, 0x18, 0x00, 0x18, 0x00}, // Question mark '?' (0x3F)
    {0x3c, 0x66, 0x6e, 0x6e, 0x60, 0x66, 0x3c, 0x00}, // At sign '@' (0x40)

    // Uppercase letters 'A'-'Z' (0x41 - 0x5A)
    {0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00}, // A
    {0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00}, // B
    {0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00}, // C
    {0x7c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x00}, // D
    {0x7e, 0x60, 0x60, 0x7c, 0x60, 0x60, 0x7e, 0x00}, // E
    {0x7e, 0x60, 0x60, 0x7c, 0x60, 0x60, 0x60, 0x00}, // F
    {0x3c, 0x66, 0x60, 0x6e, 0x66, 0x66, 0x3c, 0x00}, // G
    {0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00}, // H
    {0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00}, // I
    {0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x38, 0x00}, // J
    {0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00}, // K
    {0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00}, // L
    {0x66, 0x7e, 0x7e, 0x6b, 0x63, 0x63, 0x63, 0x00}, // M
    {0x66, 0x66, 0x76, 0x7e, 0x6e, 0x66, 0x66, 0x00}, // N
    {0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00}, // O
    {0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00}, // P
    {0x3c, 0x66, 0x66, 0x66, 0x6e, 0x6c, 0x36, 0x00}, // Q
    {0x7c, 0x66, 0x66, 0x7c, 0x6c, 0x66, 0x66, 0x00}, // R
    {0x3c, 0x66, 0x30, 0x18, 0x0c, 0x66, 0x3c, 0x00}, // S
    {0x7e, 0x7e, 0x5a, 0x18, 0x18, 0x18, 0x3c, 0x00}, // T
    {0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00}, // U
    {0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00}, // V
    {0x63, 0x63, 0x63, 0x6b, 0x7e, 0x7e, 0x66, 0x00}, // W
    {0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00}, // X
    {0x66, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x3c, 0x00}, // Y
    {0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00}, // Z

    {0x3c, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c, 0x00}, // Left square bracket '[' (0x5B)
    {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00}, // Backslash '\' (0x5C)
    {0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c, 0x00}, // Right square bracket ']' (0x5D)
    {0x18, 0x3c, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00}, // Caret '^' (0x5E)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00}, // Underscore '_' (0x5F)
    {0x18, 0x18, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00}, // Grave accent '`' (0x60)

    // Lowercase letters 'a'-'z' (0x61 - 0x7A)
    {0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00}, // a
    {0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x7c, 0x00}, // b
    {0x00, 0x00, 0x3c, 0x66, 0x60, 0x66, 0x3c, 0x00}, // c
    {0x06, 0x06, 0x3e, 0x66, 0x66, 0x66, 0x3e, 0x00}, // d
    {0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00}, // e
    {0x1c, 0x36, 0x30, 0x7c, 0x30, 0x30, 0x30, 0x00}, // f
    {0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x7c}, // g
    {0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00}, // h
    {0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3c, 0x00}, // i
    {0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0x6c, 0x6c, 0x38}, // j
    {0x60, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0x66, 0x00}, // k
    {0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00}, // l
    {0x00, 0x00, 0x76, 0x7e, 0x6b, 0x63, 0x63, 0x00}, // m
    {0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00}, // n
    {0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00}, // o
    {0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60}, // p
    {0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x06}, // q
    {0x00, 0x00, 0x7c, 0x66, 0x60, 0x60, 0x60, 0x00}, // r
    {0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00}, // s
    {0x30, 0x30, 0x7c, 0x30, 0x30, 0x36, 0x1c, 0x00}, // t
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00}, // u
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00}, // v
    {0x00, 0x00, 0x63, 0x63, 0x6b, 0x7e, 0x36, 0x00}, // w
    {0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00}, // x
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x06, 0x7c}, // y
    {0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00}, // z

    {0x0e, 0x18, 0x18, 0x30, 0x18, 0x18, 0x0e, 0x00}, // Left curly brace '{' (0x7B)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // Vertical bar '|' (0x7C)
    {0x70, 0x18, 0x18, 0x0c, 0x18, 0x18, 0x70, 0x00}, // Right curly brace '}' (0x7D)
    {0x76, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // Tilde '~' (0x7E)
};

#endif