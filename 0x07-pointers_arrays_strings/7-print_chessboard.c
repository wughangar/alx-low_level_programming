#include <stdio.h>
#include "main.h"
/**
 *@a: chessboard to be printed
 * print_chessboard - function that prints chess board
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar(10);
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar(10);
}
