#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: param value to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	int _bool = ((c >= 'a' && c <= 'z' && c) || (c >= 'A' && c <= 'Z'));

	return (_bool);
}
