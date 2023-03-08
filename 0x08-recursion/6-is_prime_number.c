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
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	int i = 5;
	int w = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i += w;
		w = 6 - w;
	}
	return (1);
}
