#include <stdio.h>

/*
 * main - prints the alphabet in lower case and
 * uppercase using the putchar function
 * 
 * Return: 0 if success witout any error
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
		

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
