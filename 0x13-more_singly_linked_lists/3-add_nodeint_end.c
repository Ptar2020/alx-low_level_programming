#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	if (head)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->next = NULL;

		if (*head == NULL)
		{
			*head = ptr;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = ptr;
			return (temp);
		}
	}

	return (NULL);
}
