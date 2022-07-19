#include "main.h"

/**
 * _strlen_recursion - works out the length of the line
 * @s: the string varible to count
 * @c: The counter for length of the string
 * @str_len: the variable carrying the returned answer
 * Return str_len
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (s[c] != '\0')
	{
		int str_len = 1 + _strlen_recursion(s + 1);
		return str_len;
	}

}
