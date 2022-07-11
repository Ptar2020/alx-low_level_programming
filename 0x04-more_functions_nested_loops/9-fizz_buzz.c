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
	int x = 1;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
			else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i, ", x);
		}
	}
	return (0);
}
