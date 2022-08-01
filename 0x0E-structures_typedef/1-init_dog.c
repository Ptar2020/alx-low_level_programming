#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializer for the sog structure
 * @d: Dog structure
 * @name: The dogs name
 * @age: The dogs age
 * @owner: The dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
