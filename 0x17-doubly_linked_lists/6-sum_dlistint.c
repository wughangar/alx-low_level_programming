#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - function that returns the sum of all the dats in linked list
 * @head: pointer to head node
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
