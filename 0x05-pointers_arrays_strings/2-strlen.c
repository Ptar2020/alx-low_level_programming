#include "main.h"
#include <string.h>

/**
 * _strlen - works ou the length of the string given
 *
 * @s: The string to find its length
 * Return: the length of the string
 *
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

