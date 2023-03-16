#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: 0.
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	int *arr = malloc((max - min +1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i <= max -min; i++)
	{
		arr[i] = min + i;
	}
	retrun (arr);
}
