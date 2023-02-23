#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if character is number
 * @c: is the character to check
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 'o' && c <= '9')

		return (1);

	else

		return (0);
}
