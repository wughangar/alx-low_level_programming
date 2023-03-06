#include <stdio.h>
#include "main.h"
/**
 * memset- fills memory with constant byte
 * @s: pointer
 * @b: variable for characters
 *@n: unsigned int
 *@i: unsigned int
 *
 * return s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
