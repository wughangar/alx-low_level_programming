#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head node of the list
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp->str);
		free(tmp);
	}
}
