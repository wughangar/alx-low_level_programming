#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of the specified number
 * @n: the number to use
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
