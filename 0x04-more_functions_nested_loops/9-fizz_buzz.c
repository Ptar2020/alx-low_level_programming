#include "main.h"
#include <stdio.h>
/**
* main - function call
*
* @a - The Uused parameter
* Return: the returned numbers as per the given conditions
*/

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		int i = 1;

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", a);
		}

		a++;
	}
	return (0);
}
