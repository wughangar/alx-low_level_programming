#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - function that serches for string in any set of byte
 * @s: pointer ot the string to search in
 * @accept: pointer to string containing the bytes to match
 *
 * Return: pointer to byte in s that matches otherwise return NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accepy[j])
				return (s + i)
		}
	}
	return (NULL);
}
