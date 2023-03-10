#!/bin/bash
gcc -c wall -werror -wextra *.c
ar rc lilball.a *.o
ranlib lilball.a

