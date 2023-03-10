#include "main.h"
#include <stdio.h>
/*
 * This program prints the name of the program that is executed
 */

/**
 * main - Entry point for the program
 * @argc: number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
