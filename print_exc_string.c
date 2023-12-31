#include "main.h"
/**
 * print_exe_string - prints string
 * @val: value printed
 *Return: len
 */
int print_exe_string(va_list val)
{
	int i;
       	int len = 0;
	int value;

	char *s = va_arg(val, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

