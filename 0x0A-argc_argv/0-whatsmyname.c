#include "main.h"
#include <stdio.h>
/**
 * _putchar - takes single character and returns an integer
 * @c: character
 *
 * Return: return an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - prints name of the programe followed by new line
 *@argc: the number of arguments passed to the program
 *@argv: an array of strings containing arguments passed
 *
 * Return: 0 if program runs succesfully.
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
