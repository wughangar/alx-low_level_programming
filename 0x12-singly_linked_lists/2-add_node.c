#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the top
 * @head: pointer to a pointer to the head of the list
 * @str: the string to be added o the new node
 *
 * Return: address of new element or NUll if failled
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
