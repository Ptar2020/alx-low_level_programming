#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -g -fpic *.c 
gcc -c -shared -o liball.so
