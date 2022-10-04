#!/bin/bash
gcc -c -Wall -pedantric -Werror -Wextra -c *.c
ar rc liball.a *.o

