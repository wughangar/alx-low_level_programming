#include "main.h"
/**
 * print_diagonal - printing diagnol line
 * @n: input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i <= n; i++)
	{
		for (j = o; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
