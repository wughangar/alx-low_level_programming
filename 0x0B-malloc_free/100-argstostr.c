#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: first argument
 * @av: second argument
 *
 * Return: 0.
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int pos = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for ( i = 0; i < ac; i ++)
		for (j = 0; av[i][j]; j++)
			len++;

	newstr = malloc(sizeof(char) * (len = ac = 1));
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newstr[pos++] = av[i][j];
		}
		newstr[pos++] = '\n';
	}
	newstr[pos] = '\0';
	free(newstr);
	return (newstr);
}
