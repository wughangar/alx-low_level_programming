#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every letter in stdout
 *@i: looping through 
 */
void puts2(char *str)
{
	char *str;
	int i = 0;

	while (str(i) != '\0')
	{
		_putchar("%c\n", i, str[i]);
		i++;
	}
}
