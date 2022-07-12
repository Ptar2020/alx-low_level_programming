#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - the function
 * @str: the string to print
 * return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int len = strlen(str);

	while (i != '\0')
	{
		i++;
	}
	for ( ; j <= len/2; j++)
	{
		_putchar(str[j]);
	}
}
