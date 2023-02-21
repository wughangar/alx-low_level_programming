#include "main.h"
/**
 * print_alphabet- prints lower case a-z
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
