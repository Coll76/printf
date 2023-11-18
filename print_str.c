#include "main.h"
/**
 * _strlen - returns length of a string
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
		return (i);
}
#include "main.h"
/**
 *int_strlen - applied for constant char pointer str
 * @str: char pointer
 * Return: 1
 */
int int_strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
		return (i);
}
