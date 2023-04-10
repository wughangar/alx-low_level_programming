#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: pointer to file
 * @letters: number of letter in filename
 *
 * Return: 0 if it fails.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int x = 0;
	int y;
	char *temp;
	size_t byt_wrote;

	x = letters * sizeof(char);

	if (filename == NULL)
	{
		return (0);
	}
	y = open(filename, O_RDONLY);
	if (y == -1)
	{
		return (0);
	}

	temp = malloc(x);

	byt_wrote = write(y, temp, x);

	if (byt_wrote == (size_t)-1)
	{
		return (0);
	}

	free(temp);
	close(y);

	return (byt_wrote);
}
