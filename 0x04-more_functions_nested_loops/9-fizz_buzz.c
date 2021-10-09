#include <stdio.h>
#include "main.h"

/**
 * main - prints fizz for 3 multiples or buzz for 5
 * Return: 0 if was success another case 1
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || (i / 10) + (i % 10) == 3)
		{
			if (i % 5 == 0 || ((i % 10) == 0 || (i % 10) == 5))
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (i % 5 == 0 || ((i % 10) == 0 || (i % 10) == 5))
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
