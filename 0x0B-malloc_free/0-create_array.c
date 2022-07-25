#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the starting function
 * @size: The size of the array
 * @c:The array formed
 * Return: The pointer to base address of the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	else
	{
		while (i < size)
		{
			ptr[i] = c;
			i = i + 1;
		}
	}

	return (ptr);
}
