#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodein_end - functing that adds node at the end 
 * @head: pointer to a pointer 
 * @n: const integer
 *
 * Return: address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next= new_node;

	return (new_node);
}
