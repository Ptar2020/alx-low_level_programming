#include <stdio.h>
#include "main.h"
 
int get_endianness(void)
{
        short int word = 0x0110;
        char *b = (char *)&word;
        return (b[0] ? 1 : 0);
}
