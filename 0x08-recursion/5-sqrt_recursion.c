#include "main.h"

/**
 * helper - checks for square root
 * @j: int
 * @k: int
 *
 * Return: int
 *
 * _sqrt_recursion - returns the natural square root of a number 
 * @n: integer to find sqrt of
 * Return: natural root otherwise -1
 */
int helper(int j, int k)
{
	if (j * j == k)
		return (j);
	if (j * j > k)
		return (-1);
	return (helper(j + 1, k);
}
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (helper(1,n);
}
