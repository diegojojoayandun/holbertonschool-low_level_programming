#include "main.h"

/**
 * _isdigit - function to check for a char to 0-9
 * @c: param value to be checked
 * Return: 1 if c is number, 0 otherwise
 */
int _isdigit(int c)
{
	int _bool = ((c >= 48 && c <= 57));

	return (_bool);
}
