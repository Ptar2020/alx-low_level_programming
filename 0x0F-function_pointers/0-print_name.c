#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints out the name passed to it
 * @f: The function pointer
 * @name: The name to be printed out
 */

void print_name(char* name, void(*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}

}
