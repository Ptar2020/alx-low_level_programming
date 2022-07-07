#include "main.h"
#include <stdio.h>
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
                printf("FizzBuzz");
            }
            else
            {
                printf("Fizz");
            }
        }
        if (i % 5 == 0)
        {
            if  (i % 3 == 0)
            {
                printf("FizzBuzz");
            }
            else
            {
                printf("Buzz");
            }
        }
        a++;
    }
    return (0);
}
