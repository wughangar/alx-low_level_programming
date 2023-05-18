#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- function that prints list items
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t x = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		x++;
	}

	return (x);
}
