#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - The operating function
 * @separator: Separates one string from the other
 * @n: The number of strings to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i = 0;
	char *the_string;

	va_start(str, n);
	while (i < n)
	{
		the_string = va_arg(str, char *);

		if (the_string == NULL)
		{
			printf("%s", "(nil)");
		}
		printf("%s", the_string);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(str);
}

