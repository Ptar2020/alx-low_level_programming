#include <stdlib.h>
#include <stdio.h>

/**
 * main - The operating function
 * Return: The sum
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i = i + 1)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%i\n", sum);
	return (0);i
}
