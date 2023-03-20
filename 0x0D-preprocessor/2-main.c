#include "holberton.h"
/**
 * main - prints file name
 *
 * Return: 0.
 */
void print_filename(void)
{
	char *filename = __FILE__;
	int i;

	for (i = 0; filename[i] != '\0'; i++)
	{
		_putchar(filename[i]);
	}
	_putchar('\n');
}
