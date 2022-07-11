#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - entry point to convert the string
 *
 * Return: Always 0 if success
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen";
	len = _strlen(str);
	printf("%d\n", len);
	return 0;
}
