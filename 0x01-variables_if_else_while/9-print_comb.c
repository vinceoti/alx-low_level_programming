#include <stdio.h>

/**
 * main - gives combinations of single-digit numbers
 * Return: Mostly 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	
	putchar('\n');
	return (0);
}
