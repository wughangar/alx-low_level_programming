#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Retun: 0 if success
 */
int main(int argc, char *argv[])
	{
	int i, num_bytes;

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

	unsigned char *p = (unsigned char *) main;

	for (i = 0; i < num_bytes - 1; i++)
		printf("%02x ", *(p + i));
		printf("%02x\n", *(p + i));

		return (0);
}
