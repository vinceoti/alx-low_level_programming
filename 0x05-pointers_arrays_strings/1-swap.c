#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @b: integer to swap
 * @a: integer to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
