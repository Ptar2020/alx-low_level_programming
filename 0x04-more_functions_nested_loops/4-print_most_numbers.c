#include "main.h"

/**
* print_most_numbers - entry point
*
* Return : The returned value, 0
*/
void print_most_numbers(void)
{
    int x = 0;

    for (; x <= 9; x++)
    {
        if (x == 2 || x == 4)
        {
            continue;
        }
        else
        {
            _putchar(x);
        }
    }
    _putchar('\n');
}
