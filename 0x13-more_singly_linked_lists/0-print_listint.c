#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		printf("List is empty");
	while (h != NULL)
	{
		count = count + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return(count);
}
