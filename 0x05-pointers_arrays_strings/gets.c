#include <stdio.h>

int main(int *s)
{
	int i;
	for (; i != '\0'; i++)
	{
		i++;
		s++;
	}
	return 0;
}