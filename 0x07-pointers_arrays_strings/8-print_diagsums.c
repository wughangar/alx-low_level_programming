#include "main.h"
/**
 * print_diagsums - prints the sum of two diagnols of a square
 * @a: the matrix to be summed
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	_putchar(sum1 / 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar(',');
	_putchar('');
	_putchar(sum2 / 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}
