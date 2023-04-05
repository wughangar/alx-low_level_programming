#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - main function
 * multiply - function that multiplies two integers
 * @num1: first int
 * @num2: second int
 */

char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	char *result = (char *) malloc(sizeof(char) * (len1 + len2));
	int i, j, carry = 0;

	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = '0';
	}

	for (i = len1 - 1; i >= 0; i--)
	{
	carry = 0;
	for (j = len2 - 1; j >= 0; j--)
	{
		int temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
	carry = temp / 10;
	result[i + j + 1] = (temp % 10) + '0';
	}
		 result[i] += carry;
	}

	i = 0;
	while (result[i] == '0' && i < len1 + len2 - 1)
	{
	i++;
	}

	char *final_result = (char *) malloc(sizeof(char) * (len1 + len2 - i + 1));

	strncpy(final_result, result + i, len1 + len2 - i);
	final_result[len1 + len2 - i] = '\0';

	free(result);

	return (final_result);
}

int main(int argc, char **argv)
	{
	if (argc != 3)
	{
		printf("Error\n");
	return (98);
	}

	int i;

	for (i = 0; i < strlen(argv[1]); i++)
	{
	if (!isdigit(argv[1][i]))
	{
		printf("Error\n");
		return (98);
	}
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (!isdigit(argv[2][i]))
	{
		printf("Error\n");
		return (98);
	}
	}

	char *result = multiply(argv[1], argv[2]);

	printf("%s\n", result);
	free(result);

	return (0);
}
