#ifndef MAIN_H
#define MAIN_H
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size)
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size)
int print_hexadecimal(va_list types, char buffer[],
		        int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
		        int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[], char buffer[],
		        int flags, char flag_ch, int width, int precision, int size);
