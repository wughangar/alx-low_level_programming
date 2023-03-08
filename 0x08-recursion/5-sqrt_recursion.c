#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns natural square root of a number n using recursion
 * @n: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt(n));
	}
}
