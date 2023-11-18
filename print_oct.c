#include <stdio.h>
#include "main.h"
/**
 * print_oct - finds octal
 * @val: value
 * Return: octal
 */
int print_oct(va_list val)
{
	int *array;
	int i, counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
