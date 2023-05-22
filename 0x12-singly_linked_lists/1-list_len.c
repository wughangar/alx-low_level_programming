#include "lists.h"
/**
 * list_len - returns the number of elements in a alinked list_t
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
