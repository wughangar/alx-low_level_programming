#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives the index
 * @key: pointer to key
 * @size: size of the array
 *
 * Return: index of a given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	unsigned long int index = value % size;

	return (index);
}
