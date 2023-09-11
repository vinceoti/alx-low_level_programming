#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGIJKLMNOPRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)

		putchar(a[x]);
	putchar('\n');
	return (0);
}
