#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @arr: array
 *
 * Return: NULL if size is 0.
 */ 
char *create_array(unsigned int size, char c)
{
	int i;


	if (size == 0)
	{
		return (NULL);
	}
	char* arr = (char*)malloc(size* sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
