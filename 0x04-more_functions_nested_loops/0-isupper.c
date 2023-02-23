#include "main.h"
#include <stdio.h>

/**
 * _isupper - chceks if character is upper case
 * @c: character to test
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
