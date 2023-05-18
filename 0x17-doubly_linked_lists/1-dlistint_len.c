#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * dlistint_len - returns number of elements
 * @h: pointer to head
 *
 * Return: number of elemenets
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t x = 0;

	while (current != NULL)
	{
		current = current->next;
		x++;
	}
	return (x);
}
