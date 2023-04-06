#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: pointer
 *
 * Return: converted number else 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			x = x * 2;
		}
		else if (b[i] == '1')
		{
			x = x * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (x);
}
