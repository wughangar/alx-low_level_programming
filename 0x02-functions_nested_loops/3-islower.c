#include "main.h"
/**
 * main - prints output
 * 
 * Return: Always 0.
 */

int _islower(int c);

int main(void)
{
char c = 'a';
if (_islower(c))
{
_putchar("%c is lowercase\n", c);
}
else
{
_putchar("%c is not lowercase\n", c);
}
return 0;
}
