#!/bin/bash

for file in *.c; do
	gcc -c -fPIC "$file" -o "${file%.c}.o"
gcc -shared -o liball.so *.o

rm *.o
