#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates the shash table
 * @size: size of the elements in the array
 *
 * Return: the table created
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ptable = malloc(sizeof(shash_table_t));

	if (ptable == NULL)
	{
		return (NULL);
	}
	ptable->size = size;
	ptable->array = calloc(size, sizeof(shash_node_t *));

	if (ptable->array == NULL)
	{
		free(ptable);
		return (NULL);
	}
	ptable->shead = NULL;
	ptable->stail = NULL;

	return (ptable);
}

/**
 * shash_table_set - sets the table
 * @ht: table to be set
 * @key: key to values
 * @value: value assigned to key
 *
 * Return: 1 if success
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *nnode, *current, *sprev;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	sprev = NULL;

	while (current != NULL && strcmp(current->key, key) < 0)
	{
		sprev = current;
		current = current->snext;
	}

	if (current != NULL && strcmp(current->key, key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}

	nnode = malloc(sizeof(shash_node_t));
	if (nnode == NULL)
		return (0);

	nnode->key = strdup(key);
	nnode->value = strdup(value);
	nnode->next = NULL;

	if (sprev == NULL)
	{
		nnode->snext = ht->shead;
		ht->shead = nnode;
	}
	else
	{
		nnode->snext = sprev->snext;
		sprev->snext = nnode;
	}

	if (nnode->snext == NULL)
		ht->stail = nnode;
	else
		nnode->snext->sprev = nnode;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = nnode;
	}
	else
	{
		nnode->next = ht->array[index];
		ht->array[index]->sprev = nnode;
		ht->array[index] = nnode;
	}
	return (1);

}

/**
 * shash_table_get - gets the values in the table
 * @ht: hash table
 * @key: where the value will be extracted
 *
 * Returns: value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return ((char *)key);
}

/**
 * shash_table_print - prints the table
 * @ht: table to be printed
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (flag)
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->next;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints table in reverse
 * @ht: table to be printed
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	current = ht->stail;
	while (current != NULL)
	{
		printf("%s, %s\n", current->key, current->value);
		current = current->sprev;
	}
}

/**
 * shash_table_delete - deletes the table
 * @ht: table to be deleted
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *nnode;
	shash_node_t *tmp;

	if (ht == NULL)
	{
		return;
	}

	nnode = ht->shead;
	while (nnode != NULL)
	{
		tmp = nnode;
		nnode = nnode->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
