#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to the head
 * @index: index for node to be deleted
 *
 * Return: 1 if success and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last_node;
	listint_t *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	last_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (last_node->next == NULL)
			return (-1);
		last_node = last_node->next;
	}

	current_node = last_node->next;
	if (current_node == NULL)
		return (-1);
	last_node->next = current_node->next;
	free(current_node);

	return (1);
}
