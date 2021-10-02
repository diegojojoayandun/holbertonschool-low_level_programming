#include <stdio.h>

/**
 * main - prints the alphabet in reverse witout printf
 * Return: 0 if success witout any error
 */
int main(void)
{
        char letter;

        for (letter = 'z'; letter >= 'a'; letter--)
	{
                putchar(letter);
	}
	putchar('\n');
	return (0);
}
