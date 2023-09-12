#include <stdio.h>

/**
 * main - gives  possible different combinations of 2 integers
 * Return:  0 for pass
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
