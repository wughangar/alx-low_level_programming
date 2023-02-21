#include <main.h>
/**
 * main - prints output
 * 
 * Return: Always 0.
 */

int _islower(int c);

int main(void)
{
char c = 'a';
if (_islower(c))
{
printf("%c is lowercase\n", c);
}
else
{
printf("%c is not lowercase\n", c);
}
return 0;
}
