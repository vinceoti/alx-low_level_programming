#include "main.h"

/**
 * write all alphabets in lowercase
 */

void lower_alphabets(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
}
