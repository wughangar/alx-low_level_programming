#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: a pointer to a function that prints a single character
 *
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	for (name[i] != '\0'; i++)
	{
		f(&name[i]);
	}
}
