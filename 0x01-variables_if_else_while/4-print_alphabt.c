#include <stdio.h>
/**
 * main- prints the lines in stdout
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
