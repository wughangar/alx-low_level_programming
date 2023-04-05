#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees the linked list
 * @h: pointer to pointer
 *
 * Return: the size of the list hat was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h 1 = NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = NULL;
			free(temp);
			count++;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	return (count);
}
