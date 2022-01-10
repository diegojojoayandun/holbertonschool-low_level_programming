#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to string
 * @b: character which be used to fills the memory
 * @n: size first n bytes of memmory
 * Return: a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
