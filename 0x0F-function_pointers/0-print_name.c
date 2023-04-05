#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: a pointer to a function that prints a single character
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
