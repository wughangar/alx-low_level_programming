#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to new created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
	{
		return (NULL);
	}
	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));
	return (hashTable);
}
