#include "main.h"
/**
 * wildcmp - function getting the answe
 * @s1: The first string
 * @s2: The second string
 * Return: an integer value
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		return (0);
	}
	else
	{
		return (1);
	}	
}
