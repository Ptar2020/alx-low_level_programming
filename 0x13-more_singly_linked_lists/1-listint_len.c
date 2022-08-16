#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - The working function
 * @h: The header pointer
 * Return: Returns the total count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("Empty list.");
	}

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
