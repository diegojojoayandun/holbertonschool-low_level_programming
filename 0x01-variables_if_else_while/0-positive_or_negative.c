#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - prints if a random numbers is positive
 * negative or zero
 *
 * Return: 0 if was successful or any other if not
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
