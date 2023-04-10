#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <errno.h>


/**
 * cp - function that copies content of a file to another
 * @argc: number of arguments
 * @argv: data for the arguments
 *
 * Return: void
 */

void cp(int argc, char* argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}


