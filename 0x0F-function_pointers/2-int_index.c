#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - The function
  * @array: The array to check from
  * @size: This is the array size
  * @cmp: the pointer to the function
  *
  * Return: Integer value
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{

			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
