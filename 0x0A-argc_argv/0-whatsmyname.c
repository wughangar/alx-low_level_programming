#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
