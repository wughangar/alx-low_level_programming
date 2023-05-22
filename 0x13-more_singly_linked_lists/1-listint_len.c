#include "lists.h"
/**
 * listint_len - returns number of elements in the list
 * @h: pointer to list
 *
 * Return: number of elements lists
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
