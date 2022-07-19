#include "main.h"
/**
 * append_text_to_file - the function that append the text at the end of file
 * @filename: name of the file of the pointer
 * @text_content: contents of the file
 * Return: -1 if the function fails, otherwise return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int j = 0, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[l])
		{
			j++;
			l++;
		}
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, j);
	if (op == -1)
	{
		return (-1);
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
