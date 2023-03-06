#include <stdio.h>
#include "main.h"
/**_strcht - function that locates a character in a string
 * @s: pointer to the strubg to search in
 * @c character to locate
 *
 * Return: pointer to first occurance of char c or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
