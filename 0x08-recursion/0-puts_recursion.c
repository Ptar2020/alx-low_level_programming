#include "main.h"

/**
 *  _puts_recusrion - works out the printing task
 *  @s: THe parameter passed to the function
 *  return nothing
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
