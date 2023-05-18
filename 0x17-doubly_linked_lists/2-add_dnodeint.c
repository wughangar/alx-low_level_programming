#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to beginning on the list
 * @head: double pointer to head node
 * @n: conast int
 *
 * Return: new adress to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode =(dlistint_t) malloc(sizeof(dlistint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
