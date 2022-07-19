#include "main.h"

/**
 * _print_rev_recursion - the function giving the revrese of the given string
 *
 * @str:the parameter passed to the function
 * return void
 */

void _print_rev_recursion(char *str)
{
	int i = 0;

	if (str[i] != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(str[i]);
	}
}

