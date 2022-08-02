#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - The free-dog function
  * @d: Dog pointer
  *
  * Return: Nothing to return
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((d*).name);
		free(d);
	}
}
