#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fpic *.c
gcc -shared -o libdynamic.so *.o
