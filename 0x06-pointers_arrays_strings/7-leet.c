#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; str[i]; i++)
	{
	for (j = 0; letters[j]; j++)
	{
	if (str[i] == letters[j])
	{
	str[i] = numbers[j];
	break;
	}
	}
	}

	return (str);
}
