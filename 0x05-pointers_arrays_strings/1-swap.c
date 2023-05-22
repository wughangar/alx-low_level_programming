#include "main.h"
/**
 * swap_int - swaps values of two integers
 *
 * @a: integer value to be swapped
 *@b: integer value to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
