#include "main.h"

/**
 * append_text_to_file - Write a function that appends text
 * @filename: filename
 * @text_content: text content
 * Return: Data
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int des;
	int r = 0;
	int w;

	if (filename == NULL)
		return (-1);
	des = open(filename, O_WRONLY | O_APPEND);
	if (des < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		while (text_content[r] != '\0')
		{
			r++;
		}
		w = write(des, text_content, r);

		if (w < 0)
			return (-1);
	}
	close(des);
	return (1);
}
