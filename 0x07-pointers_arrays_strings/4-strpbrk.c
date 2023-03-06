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
	char *ptr_accept;

	while (*s)
	{
		ptr_accept = accept;
		while (*ptr_accept)
		{
			if (*ptr_accept == *s)
				return (s);
			ptr_accept++;
		}
		s++;
	}
	return (NULL);
}
