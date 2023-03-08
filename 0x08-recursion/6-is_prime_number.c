#include "main.h"
/**
 * is_prime_number - function that checks for input prime number
 *
 * @n: integer to be checker
 *
 * Return: - if prime number otherwise 0.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
