#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _strlen(const char *s);
int _itoa(int num);
int _btoa(unsigned int num);
int _itou(unsigned int num);
int _itoo(unsigned int num);
int _itox(unsigned int num);
int _itoX(unsigned int num);
int handle_conversion_specifier(const char *format, va_list args);
int handle_char_specifier(va_list args);
int handle_string_specifier(va_list args);
int handle_percent_specifier(void);
int handle_decimal_specifier(va_list args);
int handle_integer_specifier(va_list args);
int handle_binary_specifier(va_list args);
int handle_unsigned_specifier(va_list args);
int handle_octal_specifier(va_list args);
int handle_hex_specifier(va_list args);
int handle_Hex_Specifier(va_list args);
int handle_other_specifiers(char specifier, va_list args);

/* the address specifier */
int stringLength(const char *str);
void writeString(const char *str);
void writeChar(char c);
void writeHex(unsigned long value);
void handle_memory_address(void *ptr);

#endif
