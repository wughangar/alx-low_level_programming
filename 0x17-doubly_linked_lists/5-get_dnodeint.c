#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns node at nth position of dlistint_t
 * @head: pointer to head of the node 
 * @index: index of the node
 *
 * Return: NULL if node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *current = head;

	while (current != NULL && x < index)
	{
		current = current->next;
		x++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}


