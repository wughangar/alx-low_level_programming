#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to a pointer
 *
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (*head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	new = *head;
	data = new->n;
	*head = (*head)->next;
	free(new);

	return (data);
}
