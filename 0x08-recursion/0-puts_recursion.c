#include "main.h"
/**
 * _puts_recursion - function that prints a string
 *
 * @s: pointer for the string to be printed
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
