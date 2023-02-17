#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints a sentence inthe stdout
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

srand(time(NULL));
n = rand() - RAND_MAX / 2;

printf("%d ", n);
    
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
