#include <stdio.h>

/**
 * main - prints a-z,
 * followed by a new line
 * Return:0 if success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
