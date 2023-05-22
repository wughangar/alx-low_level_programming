#include <stdio.h>
#include "main.h"
/**
 * _memset - function that filles memory with constant byte
 * @s: pointer to memory area to be filled
 * @b: value to be set
 * @n: number of bytes to be set ot the value
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
