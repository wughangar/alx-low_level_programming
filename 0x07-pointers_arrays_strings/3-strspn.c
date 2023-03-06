#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefic substring
 * @s: pointer to the string to search in
 * @accept: pointer to the string containing the bytes to match
 *
 * Return: number of bytes in  initial segment that match bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
