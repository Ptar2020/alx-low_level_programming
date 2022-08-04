#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - The function printing
 * @separator: The separator, used after each num is printed
 * @n:The number of nums
 * Return : Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);
	while (i < n)
	{
		int nums = va_arg(num, int);
		printf("%d", nums);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	printf("\n");
	va_end(num);

}


