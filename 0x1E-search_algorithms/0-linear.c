#include "search_algos.h"

/**
 * linear_search - searches for value in an array
 * @array: pointer to first array
 * @size: number of elements in an array
 * @value: value to be searched
 *
 * Return: int index of where value if found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
