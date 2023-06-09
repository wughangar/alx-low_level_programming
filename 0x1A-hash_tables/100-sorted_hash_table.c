#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/**
 * shash_table_create - creates a table
 * @size: size of the array elements
 *
 * Return: the table
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
