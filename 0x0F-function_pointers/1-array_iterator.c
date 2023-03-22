#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element of an array
 * @array: the array to iterate
 * @size: the size of the array
 * @action: a pointer to a function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
