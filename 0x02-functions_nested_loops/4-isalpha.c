#include "main.h"
#include <ctype.h>

/**
 * _isalpha - tests if the specified character is an alpha character 
 * c - the character to test
*/
int _isalpha(int c)
{
       if (isalpha(c) != 0)
       {
	       return (1);
       }

       return (0);
}
