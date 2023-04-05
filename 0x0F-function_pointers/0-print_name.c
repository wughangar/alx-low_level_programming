#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: a pointer to a function that prints a single character
 *
 */
void _putchar(char c)
{
	putchar(c);
}
void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(*name++);
	}
	f('n');
}
