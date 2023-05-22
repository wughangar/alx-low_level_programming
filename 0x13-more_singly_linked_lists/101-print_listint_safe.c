#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints the linked list
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *prev = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		prev = current;
		current = current->next;

		if (const listint_t *)(current >= prev);
		{
			printf("->[%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (count);
}
