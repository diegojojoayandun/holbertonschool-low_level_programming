#include <stdio.h>

/*
 * main - prints the alphabet using the putchar function
 * avoid the q and e letters
 *
 * Return: 0 if success witout any error
 */

int main(void)
{
  char letter;

  for (letter = 'a'; letter <= 'z'; letter++)
    {
      if ((letter != 'q') && (letter != 'e'))
      {
	putchar(letter);
      }
    }

  putchar('\n');
  return (0);
}
