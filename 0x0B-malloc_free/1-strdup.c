#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: string
 *
 * Return: NULL if insufficient memory or if str = NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	int str_len;

	if (str == NULL)
	{
		return (NULL);
	}
	str_len = strlen(str);

	dup_str = (char *) malloc((str_len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);
	return (dup_str);
}
