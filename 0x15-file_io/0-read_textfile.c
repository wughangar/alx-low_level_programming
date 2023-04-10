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
	size_t byte_read;

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
	if (temp == NULL)
	{
		return (0);
	}
	byte_read = read(y, temp, letters);
	if (byte_read == -1)
	{
		free(temp);
		close(y);
		return (0);
	}

	byt_wrote = write(STDOUT_FILENO, temp, byte_read);

	if (byt_wrote == (size_t)-1)
	{
		return (0);
	}

	free(temp);
	close(y);

	return (byt_wrote);
}
