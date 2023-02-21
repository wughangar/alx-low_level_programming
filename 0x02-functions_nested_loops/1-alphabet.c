#include "main.h"
/**
 * print_alphabet- prints lower case a-z
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')

{
_putchar(letter);
letter++;
}
_putchar('\n');
}
