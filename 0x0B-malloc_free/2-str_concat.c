#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Adds two strings str1 and str2
  * @str1: the first string.
  * @str2: the second string.
  *
  * Return: The concat of the two strings
  */
char *str_concat(char *str1, char *str2)
{
int i = 0, j = 0, k = 0, l = 0;
char *s;

if (str1 == NULL)
str1 = "";

if (str2 == NULL)
str2 = "";

while (str1[i])
i++;

while (str2[j])
j++;

l = i + j;
s = malloc((sizeof(char) * l) + 1);

if (s == NULL)
return (NULL);

j = 0;

while (k < l)
{
if (k <= i)
s[k] = str1[k];

if (k >= i)
{
s[k] = str2[j];
j++;
}

k++;
}

s[k] = '\0';
return (s);
}

