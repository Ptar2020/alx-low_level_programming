#include "main.h"

/**
  * _strcmp - Compares two strings
  * @str1: The first string
  * @str2: The second string
  *
  * Return: int value
  */
int _strcmp(char *str1, char *str2)
{
int a = 0, b = 0, c = 0, r = 0, lim;

while (str1[a])
{
a++;
}

while (str2[b])
{
b++;
}

if (a <= b)
{
lim = a;
}
else
{
lim = b;
}

while (c <= lim)
{
if (str1[c] == str2[c])
{
c++;
continue;
}
else
{
r = str1[c] - str2[c];
break;
}

c++;
}

return (r);
}
