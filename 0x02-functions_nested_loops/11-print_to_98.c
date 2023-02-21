#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print the natural numbers from n to 98
 * @n: the number to start at
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		return;
	}
	
	for (i = n; i <= 98; ++i)
	{
		printf("%d", i);

		if (i < 98)
		{
			printf(", ");
		}

	}
}
