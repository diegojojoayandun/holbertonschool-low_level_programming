#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if a random numbers is positive
 * negative or zero
 * 
 * Return: 0 if was successful or any other if not
 */

int main(void)
{
	int n,res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = n % 10;

	printf("Last digit of %d is %d ", n, res);
	if (res > 5)
		printf("and is greater than 5\n");
	else if (res == 0)
		printf("and is 0\n");
	else if (res < 6 && res != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
