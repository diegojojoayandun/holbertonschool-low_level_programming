#include <stdio.h>

/**
 * main - prints all arguments it receives,
 * including first one, ending by a new line
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
