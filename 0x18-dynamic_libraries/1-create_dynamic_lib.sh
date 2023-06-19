#!/bin/bash
gcc -c -Wall -Werror -fpic *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
