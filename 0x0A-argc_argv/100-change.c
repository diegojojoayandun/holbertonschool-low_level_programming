#include <stdio.h>
#include <stdlib.h>

/**
 * sum_coins - get the numbers of coins
 * @cents: int arguments
 * Return: number of coins
 */
int sum_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents % 25 < cents)
		{
			cents -= 25;
			coins++;
		}
		else if (cents % 10 < cents)
		{
			cents -= 10;
			coins++;
		}
		else if (cents % 5 < cents)
		{
			cents -= 5;
			coins++;
		}
		else if (cents % 2 < cents)
		{
			cents -= 2;
			coins++;
		}
		else if (cents % 1 < cents)
		{
			cents -= 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: parameter counter
 * @argv: pointer to char arguments
 * Return: minimum numer of coins to change
 */
int main(int argc, char *argv[])
{
	int _change, _cents = 0;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		_cents = atoi(argv[1]);
		if (_cents < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			_change = sum_coins(_cents);
		}
	}
	printf("%d\n", _change);
	return (0);
}
