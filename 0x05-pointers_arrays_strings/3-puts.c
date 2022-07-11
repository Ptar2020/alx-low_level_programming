#include "main.h"
#include <stdio.h>

/**
 * _puts - entry function
 * @s: The variabe
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
}
