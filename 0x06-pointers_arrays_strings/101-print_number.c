#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}

	while (n / divisor > 9)
	{
	divisor *= 10;
	}

	while (divisor != 0)
	{
	_putchar((n / divisor) % 10 + '0');
	divisor /= 10;
	}
}
