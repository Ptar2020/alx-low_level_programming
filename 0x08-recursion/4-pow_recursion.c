#include "main.h"

/**
 * _pow_recursion - the function doing the job
 * @x: The base
 * @y: The power
 * Return: An integer of the number x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else
	{
		int result;

		result = x * _pow_recursion(x, y - 1);
		return (result);
	}

}
