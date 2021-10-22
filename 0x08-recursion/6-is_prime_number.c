#include "main"

int prime2(int n, int i);

/**
 * is_prime_number - to know is prime number
 * @n: number
 * Return: 1 for prime number othercase 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, n - 1));
}

/**
 * prime2 - find prime number
 * @n: number
 * @x: iterador
 * Return: 1 for prime number othercase 0
 */
int prime2(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		if (x > 0)
			return (0);
	return (actual_prime(n, x - 1));
}
