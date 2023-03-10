#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of the string to stdout
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = len / 2;

	if (len % 2 != 0)
	{
		i++;
	}

	for (; i < len; ++i)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
