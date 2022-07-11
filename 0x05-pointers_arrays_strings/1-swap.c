#include "main.h"
/**
 * swap - the executing function entry
 *
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
