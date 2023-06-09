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
	shash_table_t *ptable = (shash_table_t *)malloc(sizeof(shash_table_t));

	if (ptable == NULL)
	{
		return (NULL);
	}
	ptable->size = size;
	ptable->array = (shash_table_t **)calloc(size, sizeof(shash_table_t *));

	if (ptable->array == NULL)
	{
		free(ptable);
		return (NULL);
	}
	ptable->head = NULL;
	ptable->stail = NULL;

	return (ptable);
}
