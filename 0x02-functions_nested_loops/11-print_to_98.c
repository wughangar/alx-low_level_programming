#include "main.h"

/**
 * print_to_98 - print the natural numbers from n to 98
 * @n: the number to start at
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		return;
	}

	int i = n;

	for (; i <= 98; ++i)
	{
		printf("%d", i);

		if (i < 98)
		{
			printf(", ");
		}

	}
}
