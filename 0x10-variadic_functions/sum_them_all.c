#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	int i = 0, sum = 0;

	va_start(par, n);
	
	if (n == 0)
		return (0);

	while (i < n)
	{	sum = sum + va_arg(par, const unsigned int);
		i = i + 1;
	}
	va_end(par);
	return (sum);
}
