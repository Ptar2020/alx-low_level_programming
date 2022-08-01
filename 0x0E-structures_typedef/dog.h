#ifndef MAIN
/**
 * dog - The dog structure
 * @name:The dog name
 * @age:The dog's age
 * @owner:The dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
