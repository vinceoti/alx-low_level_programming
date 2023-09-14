#include "main.h"

/**
 * print_sign - indicates if a number is +ve or -ve
 * i is the int
 * Return: 1 and prints + if i is greater than zero
 * 0 and prints 0 if i is zero
 * -1 and prints - if i is less than zero
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	} else if (i == 0)
}
		_putchar(48);
		return (0);
	} else if (i < 0)
	{
		_putchar('-');
	}
		return (-1);
}

