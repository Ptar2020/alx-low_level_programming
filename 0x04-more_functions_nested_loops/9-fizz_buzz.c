#include "main.h"
/**
* fizz_buzz - function call
*
* @a - The Uused parameter
* Return: the returned numbers as per the given conditions
*/

int main()
{
    int a = 1;


    while ( a <= 100)
    {
        int i = 1;
        if (i % 3 == 0)
        {
            if  (i % 5 == 0)
            {
                _putchar('F');
                _putchar('i');
                _putchar('z');
                _putchar('z');
                _putchar('B');
                _putchar('u');
                _putchar('z');
                _putchar('z');
            }
            else
            {
                _putchar('F');
                _putchar('i');
                _putchar('z');
                _putchar('z');
            }
        }
        if (i % 5 == 0)
        {
            if  (i % 3 == 0)
            {
                _putchar('F');
                _putchar('i');
                _putchar('z');
                _putchar('z');
                _putchar('B');
                _putchar('u');
                _putchar('z');
                _putchar('z');
            }
            else
            {
                _putchar('F');
                _putchar('i');
                _putchar('z');
                _putchar('z');
            }
        }
        a++;
    }
    return (0);
}
