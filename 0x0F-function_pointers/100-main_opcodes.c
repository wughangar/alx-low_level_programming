#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Retun: 0 if success
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(ptr + i));
	}
	print("\n");

	return (0);
}
