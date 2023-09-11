#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*Alpabets in small letters*/ 
/* betty style doc for function main goes there */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	
	int x;
	for (x = 0 ; x < 26; x++)
		putchar(a[x]);
	putchar('\n');
	return (0);
}
