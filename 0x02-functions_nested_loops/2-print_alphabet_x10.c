#include "main.h"

/**
 * print_alphabet_x10 - givess 10x the alphabet, in lowercase,
 * then \n new line
 */
void print_alphabet_x10(void)
{
	char y;
	int k;

	k = 0;

	while (k < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		k++;
	}
}
