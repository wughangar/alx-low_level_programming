#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char reverse;
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		reverse = s[j];
		s[j] = s[i];
		s[i] = reverse;
	}
}
