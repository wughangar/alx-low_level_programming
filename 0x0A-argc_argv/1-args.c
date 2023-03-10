#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: number of arguments passed
 * @argv: arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;

	{
		printf("i%d\n", argc - 1);
	}
	return (0);
}
