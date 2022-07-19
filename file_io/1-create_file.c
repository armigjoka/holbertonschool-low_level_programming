#include "main.h"

/**
 * create_file - the function that creates a file
 * @filename: name of the file of the pointer
 * @text_content: contents of the file
 * Return: -1 if the function fails, otherwise return 1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int j = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[j])
			j++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
