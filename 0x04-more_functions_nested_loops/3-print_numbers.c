#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 */
void print_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
