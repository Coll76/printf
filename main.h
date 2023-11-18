#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int print_unsignedint(va_list args);
int print_37(void);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int int_strlen(const char *str);
int _putchar(char c);
void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int print_bin(va_list val);
int print_int(va_list args);
int print_dec(va_list args);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_exe_string(va_list val);
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_rev(va_list val);
int print_rot13(va_list val);
#endif
