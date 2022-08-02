#include <stdlib.h>
#include "dog.h"
#include <string.h>


/**
  * new_dog - The new dog pointer
  * @name: Dog's name
  * @age: Dog's age
  * @owner: The dog owner
  *
  * Return: Nothing to return
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

	if (cutie_dog == NULL)
		return (NULL);

	cutie_dog->name = malloc(sizeof(char) * name_l);

	if (cutie_dog->name == NULL)
	{
		free(cutie_dog);
		return (NULL);
	}

	cutie_dog->owner = malloc(sizeof(char) * own_l);

	if (cutie_dog->owner == NULL)
	{
		free(cutie_dog->name);
		free(cutie_dog);
		return (NULL);
	}

	cutie_dog->name = strcpy(cutie_dog->name, name);
	cutie_dog->owner = strcpy(cutie_dog->owner, owner);
	cutie_dog->age = age;
	}

	return (cutie_dog);
}
