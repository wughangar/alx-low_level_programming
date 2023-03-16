#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - alloactes memory using malloc
 * @b: unsigned integer
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	*ptr;

	void *ptr = malloc(b);

	if (ptr == NUll)
	{
		exit(98);
	}
	return (ptr);
}
