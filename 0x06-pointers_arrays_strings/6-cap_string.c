#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
	s[0] = s[0] - 'a' + 'A';
	}


	for (i = 1; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		s[i - 1] == '}')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	}
	}

	return (s);
}
