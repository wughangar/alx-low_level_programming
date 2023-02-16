#include <stdio.h>
/**
 * main-Prints a sentence to stdout
 *
 * Return:Always 0 (success)
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
printf("Size of a double: %ld byte(s)\n", sizeof(double));
printf("Size of a long double: %ld byte(s)\n", sizeof(long double));

return (0);
}
