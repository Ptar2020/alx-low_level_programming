#include "main.h"

/*
* _isdigit - the entry point
* @c: the variable to check
* Return: The value returned
*/

int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
        {
            return (1);
        }
    return (0);
}
