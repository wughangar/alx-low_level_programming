#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print the natural numbers from n to 98
 * @n: the number to start at
 */
void print_to_98(int n)
{
	int i;
	int inc = 1;

	if (n > 98)
	{
		inc = -1;
	}

	for (i = n; i != 98; i += inc)
	{
		printf("%d, ", i);
	}

	printf("98\n");
}
