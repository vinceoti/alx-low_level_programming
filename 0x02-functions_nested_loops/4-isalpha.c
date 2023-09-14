#include "main.h"

/**
 * _isalpha - scouts for alphabets in string
 * @x: the character to be checked
 * Returns 1 when x is a letter else 0
 */
int _isalpha(int x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

