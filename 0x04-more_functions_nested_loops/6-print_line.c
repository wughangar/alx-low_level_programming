#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a staright line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_puchar('\n');
}
