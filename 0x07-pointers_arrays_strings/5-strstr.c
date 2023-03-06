#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: thesubstring to search for
 *
 * Return: pointerto the beginning of located substring otherwise NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr;
	char *needle_ptr;

	if (!*needle)
		return (haystack);

	while
		(*haystack);
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr && needle_ptr == *haystack_ptr)
		{
			needle_ptr++;
			haystack_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
