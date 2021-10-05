#include "main.h"

/**
 * _islower - function to check if a value is in lowercase
 * @c: param value to be check
 * Return: 1 to lowercase, 0 if not
 */
int _islower(int c)
{
	int _bool = (c >= 'a' && c <= 'z');

	return (_bool);
}
