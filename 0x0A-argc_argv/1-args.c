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

	if (argc != -1)
	{
		printf("%d\n", argc);
	}
	return (0);
}
