#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
