#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in the list
 * @h: pointed to list
 *
 * Return: sum of elemenets
 */
size_t print_listint(const listint_t *h)
{
	size_t node_total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_total++;
	}
	return (node_total);
}
