#include "main.h"
#include <stdio.h>

/**
 * print_array - the working function
 * @a: The array to write
 * @n: The number of arrays
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
