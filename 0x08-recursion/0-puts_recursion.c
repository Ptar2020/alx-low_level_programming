#include "main.h"

/**
 *  _puts_recursion - works out the printing task
 *  @s: THe parameter passed to the function
 *  return nothing
 *
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
