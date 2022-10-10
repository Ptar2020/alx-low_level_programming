#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -g -fPIC *.c 
gcc -shared -o liball.so
