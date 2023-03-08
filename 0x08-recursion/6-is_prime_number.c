#include "main.h"
/**
 * helper - check if number is prime
 *
 * @i: int
 * @j: int
 *
 * Return: int
 */
int helper(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (helper(i + 1, j));
}

/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (helper(2, n));
}
