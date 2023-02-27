#include "main.h"
#include <stdio.h>

/** 
 * print_array - prints the array of numbers
 * @a: the array 
 * @n: the number of elements in a
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			_putchar('\n');
		}
	}
}
