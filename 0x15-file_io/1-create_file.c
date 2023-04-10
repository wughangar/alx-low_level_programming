#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - creates file
 * @filename: pointer to file
 * @text_content: pointer to content to be writer
 *
 * Return: bytes written
 */
int create_file(const char *filename, char *text_content)
{

