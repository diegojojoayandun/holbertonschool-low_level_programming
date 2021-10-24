#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: parameter counter
 * @argv: pointer to char arguments
 * Return: minimum numer of coins to change
 */
int main(int argc, char *argv[])
{
	int _change, _cents;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		_cents = atoi(argv[1]);
		if (_cents <= 0)
		{
			printf("0\n");
		}
		else
		{
			while (_cents > 0)
			{
				if (_cents % 25 < _cents)
				{
					_cents -= 25;
					_change++;
				}
				else if (_cents % 10 < _cents)
				{
					_cents -= 10;
					_change++;
				}
				else if (_cents % 5 < _cents)
				{
					_cents -= 5;
					_change++;
				}
				else if (_cents % 2 < _cents)
				{
					_cents -= 2;
					_change++;
				}
				else if (_cents % 1 < _cents)
				{
					_cents -= 1;
					_change++;
				}
			}
		}
	}
	printf("%d\n", _change);
	return (0);
}
