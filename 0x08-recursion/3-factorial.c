#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n:The parameter containing the number
 * Return: integer value
 */

int factorial(int n)
{
	int result;

	if (n <= 0)
	{
		result = 1;
		return (result);
	}

	else
	{
		result = n * factorial(n - 1);
		return (result);
	}
}

