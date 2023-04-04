#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts new node
 * @head: pointer to a pointer
 * @idx: index of the list
 * @n: data thats being stored in the new node
 *
 * Return: the adress of the new node and NULL when failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	temp_node = *head;
	for (i = 0; i < idx - 1 && temp_node != NULL; i++)
		temp_node = temp_node->next;

	if (temp_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node-> = n;
	new_node->next = temp_node->next;
	temp_node-> = new_node;

	return (new_node);
}
