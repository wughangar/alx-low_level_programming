#include "main.h"

/**
 * _islower - determins if the specified character is lowercase
 * c - the character to test
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}

