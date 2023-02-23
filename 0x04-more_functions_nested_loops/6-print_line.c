#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a staright line
 */

void print_line(int n)
{
	int i;
	int n;
	if (n <= 0)
	{
		_putchar('\n')
			return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	
	_puchar('\n');
}
