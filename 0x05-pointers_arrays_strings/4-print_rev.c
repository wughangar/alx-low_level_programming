#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse followed by new line
 * @s: string
 *
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
