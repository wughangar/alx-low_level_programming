#include "main.h"

/**
 * puts2 - prints every letter in stdout
 * @str: string to print
 */
void puts2(char *str)
{
	char *str;
	int i;

	i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
