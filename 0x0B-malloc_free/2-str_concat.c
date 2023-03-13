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
	char *s3;
	int s1_len = 0;
	int s2_len = 0;
	int concat_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_len = s1_len + s2_len + 1;
	s3 = (char *) malloc(concat_len * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcpy(s3, s2);
	return (s3);
}
