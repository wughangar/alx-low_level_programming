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
	int i;
	unsigned long int x = 1 << (size - 1);
	int size = sizeof(unsigned long int) * 8;

	for (i = 0; i < size; i++)
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
