#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * If no number is passed to the program, print 0, followed by a new line
 * if  number contains symbols, print Error, followed by a new line, return 1
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int j, i, suma;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}

				j++;


			}
			suma += atoi(argv[i]);
		}
		printf("%d\n", suma);
		return (0);
	}
}
