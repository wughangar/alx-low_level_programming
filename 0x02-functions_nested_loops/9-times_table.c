#include "main.h"

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
			printf("%-3d", row * col);

			if (col == 9)
			{
				_putchar('$');
			}
			else
			{
				_putchar(',');
			}
		}

		_putchar('\n');
	}
}

