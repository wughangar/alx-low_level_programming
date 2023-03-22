#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: number of arguments passed
 * @argv: arrya of pointers to the strinsgs of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*op_func)(int, int)

		if (argc != 4)
		{
			printf("Errod\n");
			exit(98);
		}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!0p_func)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(num1, num2);
	printf("%d\n, reuslt);

	return (0);
}
