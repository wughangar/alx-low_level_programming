#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse followed by new line
 * @i: integer
 * @len: length of string
 * @s: string
 *
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)	
	{
	putchar(s[i]);
	}
	putchar('\n');
}
