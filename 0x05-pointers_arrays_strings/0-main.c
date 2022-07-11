#include "main.h"
#include <stdio.h>

/**
 * main - enters the function
 *
 * @n:The variable used
 * reset_to_98 : The function called by main
 * return : 0 Success
 *
 *
 */

int main()
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return 0;
}

