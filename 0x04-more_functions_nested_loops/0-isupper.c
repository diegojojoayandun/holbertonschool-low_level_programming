#include "main.h"

/**
 * _isupper - function to check for a char in uppercase
 * @c: param value to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int _bool = ((c >= 'A' && c <= 'Z'));

	return (_bool);
}
