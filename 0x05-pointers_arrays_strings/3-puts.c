#include "main.h"

/**
 * _puts - entry function
 * @str: The string
 * Return: The string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
