#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: string take as parameter
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}

/**
 * is_palindrome2 - new palindrome recursion
 * @s: String taken as parameter
 * @l: Len of string
 * Return: 1 for palindrome any other case 0
 */
int is_palindrome2(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != s[l - 1])
		return (0);
	else
		return (is_palindrome2((s + 1), (l - 2)));
}

/**
 * is_palindrome - Check for palindrome string
 * @s: String to be checked
 * Return: 1 for palindrome any othercase 0
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (is_palindrome2(s, l));
}
