#!/bin/bash
gcc -c Wall -Werror -Wextra *.c
ar rc lilball.a *.o
ranlib lilball.a

