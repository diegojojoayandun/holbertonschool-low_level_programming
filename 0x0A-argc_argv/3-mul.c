#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the result of the multiplication, followed by a new line
 * If the program does not receive two arguments, print Error,
 * followed by a new line, and return 1
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
