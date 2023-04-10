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
	int len;
	int d;
	size_t rbyte;
	size_t wbyte;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}

	len = letters * (sizeof(char));

	d = open(filename, O_RDONLY);
	if (d == -1)
	{
		return (0);
	}
	temp = malloc(len);
	if (temp == NULL)
	{
		return (0);
	}

	rbyte = read(d, temp, len);
	if (rbyte == (size_t) -1)
	{
		return (0);
	}

	wbyte = write(d, temp, len);
	if (wbyte == (size_t) -1)
	{
		return (0);
	}
	free(temp);
	close(d);

	return (rbyte);
}
