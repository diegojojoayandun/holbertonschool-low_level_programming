#include <stdio.h>

/**
 * main - base 16,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char n;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
