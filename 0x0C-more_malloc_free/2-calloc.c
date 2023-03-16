#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates mempry for an array of elements
 * @nmemb: number of elements
 * @size: size of each elements in bytes
 *
 * Return: 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmeb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmeb * size);

	return (ptr);
}
