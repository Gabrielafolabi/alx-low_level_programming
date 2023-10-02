#!/bin/ bash
gcc -Wall -Pedantic -Wenor -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
