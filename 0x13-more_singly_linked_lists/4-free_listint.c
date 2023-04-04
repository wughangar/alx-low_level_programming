#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees the list
 * @head: pointer to head
 *
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
