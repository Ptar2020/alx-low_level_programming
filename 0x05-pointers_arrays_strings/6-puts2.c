#include "main.h"

/**
 * puts2 - the working function
 * @s: The string to check
 *
 * Return void
 */

void puts2(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j = j + 2)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
