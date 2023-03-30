#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node that the end of the end of a list_t list
 * @head: pointer to pointer of the head node
 * @str: the string to be added to the ew node
 *
 * Retrurn: addres of new element or NULL if it failled.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
