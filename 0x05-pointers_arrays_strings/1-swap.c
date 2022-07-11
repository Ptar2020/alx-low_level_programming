#include "main.h"
/**
 * swap_int - the executing function entry
 * @x: The The first pointe vaiable
 * @n: The pointer to variable n
 * return void
 *
 */
void swap_int(int *n, int *x)
{
	int swapper;

	swapper = *n;
	*n = *x;
	*x = swapper;
}
