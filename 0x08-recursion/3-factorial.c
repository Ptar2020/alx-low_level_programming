#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n:The parameter containing the number
 * Return - 1 if number is 1 or less, the actual factorial otherwise
 */

int factorial(int n)
{
	int result;

	if (n <= 0)
	{
		result = 1;
		return result;
	}

	else
	{
		result = n * factorial(n - 1);
		return result;
	}
}

