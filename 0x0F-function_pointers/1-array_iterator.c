#include "function_pointers.h"
/**
 * array_iterator - The iterator function
 * @array: The array
 * @size: The array size
 * @action: The function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size > 0 && array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i = i + 1;
		}
	}

}

