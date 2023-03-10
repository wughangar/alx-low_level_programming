#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 (success) otherwise 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	printf("%d\n", x * y);

	retun(0);
}
