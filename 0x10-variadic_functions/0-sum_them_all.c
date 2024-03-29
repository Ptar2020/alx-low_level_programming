#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_them_all - The summing function
 * @n: The number of arguments
 * @sum: The sum for all the varibles
 * Return: 0 if n is 0, else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i = 0;
	int sum = 0;

	va_start(par, n);
	if (n != 0)
	{
		while (i < n)
		{
			sum = sum + va_arg(par, int);
			i = i + 1;
		}
		va_end(par);
		return (sum);
	}
	return (0);
}
