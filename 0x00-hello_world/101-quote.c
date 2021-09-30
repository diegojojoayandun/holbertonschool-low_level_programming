#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point - print the phrase witout use printf, putchar, etc
 *
 * Return: 0 if was success or any other if not
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
