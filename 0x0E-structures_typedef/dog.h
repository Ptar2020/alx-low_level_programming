#ifndef MAIN
#define MAIN
/**
 * struct dog - The dog structure
 * @name:The dog name
 * @age:The dog's age
 * @owner:The dog's owner
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
