#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 *
 * Return: 0.
 */
int main(void)
{
int i = 0;

while (__FILE__[i] != '\0')
{
	_putchar(__FILE__[i]);
	i++;
}
_putchar('\n');
return (0);
}
