#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the vaue of bit to 1
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if it works and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
