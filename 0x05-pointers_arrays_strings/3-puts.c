#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: string to be printed
 * _putchar - prints output
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
