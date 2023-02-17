#include <stdio.h>
/**
 * main - prints sentence in stdout
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
char c='a';

while (c<='z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
