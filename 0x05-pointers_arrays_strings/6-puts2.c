#include "main.h"
#include <string.h>

/**
 * puts2 - prints every letter in stdout
 * @str: string to print
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
