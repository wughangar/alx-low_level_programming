#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int row = 0;
	int col = 0;

	for (row = 0; row <= 9; ++row)
	{
		for (col = 0; col <= 9; ++col)
		{
			int value = col * row;

			if (col == 0)
			{
				printf("%d", value);
			}
			else
			{
				printf("%3d", value);
			}

			if (col == 9)
			{
				putchar('$');
			}
			else
			{
				putchar(',');
			}
		}

		putchar('\n');
	}
}
