#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argc[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		ptintf("%s\n", argv[i]);
	}
	return (0);
}
