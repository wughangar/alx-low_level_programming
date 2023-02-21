#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of the specified number
 * @n: the number to use
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	printf("%d\n", last_digit);
	return (last_digit);
}
