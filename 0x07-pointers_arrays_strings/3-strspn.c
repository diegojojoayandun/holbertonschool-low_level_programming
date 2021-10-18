#include "main.h"

/**
* *_strspn - gets the length of  prefix substring
* @s: string
* @accept: string with a strin to be compare
* Return: pointer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, sw;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sw = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				sw = 1;
			}
		}
		if (sw == 0)
		{
			return (count);
		}
	}
	return (0);
}
