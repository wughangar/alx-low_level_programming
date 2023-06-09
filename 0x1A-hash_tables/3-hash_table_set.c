#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - sets the table
 * @ht: hash table
 * @key: key
 * @value: value to key
 *
 * Return: 1 if sucess else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key) % ht->size;
	hash_node_t *nnode = NULL;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}


	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (0);

	nnode->key = strdup(key);
	nnode->value = strdup(value);
	if (nnode->key == NULL || nnode->value == NULL)
	{
		free(nnode->key);
		free(nnode->value);
		free(nnode);
		return (0);
	}
	nnode->next = ht->array[index];
	ht->array[index] = nnode;

	return (1);
}
