#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - prints the pointer of a concated string
 *@s1: first string
 *@s2: second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *new_str;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
	len2++;

	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
	new_str[i] = s1[i];
	i++;
	}
	i = 0;
	while (i <= len2)
	{
	new_str[len1 + i] = s2[i];
	i++;
	}
	return (new_str);
}
