#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s", argv[i]);
		printf('\n');
	}
	return (0);
}
