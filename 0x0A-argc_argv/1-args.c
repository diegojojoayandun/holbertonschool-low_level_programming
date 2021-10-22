#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0 if success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	while (argc > 1)
	{
		i++;
		argc--;
	}
	printf("%d\n", i);
	return (0);
}
