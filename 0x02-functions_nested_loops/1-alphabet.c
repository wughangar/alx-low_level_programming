#include <stdio.h>

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return 0;
}

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
}

