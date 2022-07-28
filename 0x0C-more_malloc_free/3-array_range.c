#include "main.h"
#include <stdlib.h>

/**
  * array_range - The range of the array
  * @min: The minumum in the array
  * @max: The maximum number in the array
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
int *a, i = 0;

if (min > max)
return (NULL);

a = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (a == NULL)
return (NULL);

while (min <= max)
{
a[i] = min;
i++;
min++;
}

return (a);
}

