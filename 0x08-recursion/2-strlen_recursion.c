#include "main.h"

/**
 * _strlen_recursion - works out the length of the line
 * @s: the string varible to count
 * Return 1 or factorial
 * Return 0 if end of line
 *
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
