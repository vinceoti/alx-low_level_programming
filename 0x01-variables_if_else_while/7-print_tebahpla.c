#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
