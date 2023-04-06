#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints binary representation of a number
 * @n: unisgned int
 *
 */
void print_binary(unsigned long int n)
{
	int size_t = sizeof(unsigned long int) * 8;
	unsigned long int x = 1 << (size_t - 1);
	int i;

	for (i = 0; i < size_t; i++)
	{
		if ((n & x) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		x >>= 1;
	}
}
