#include "main.h"

/**
 * read_textfile - function that reads a text file, prints to the Posix output
 * @letters: the content of the file
 * @filename: the name of the file of a pointer
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);
	if (op == -1)
	{
		return (0);
	}
	if (re == -1)
	{
		return (0);
	}
	if (wr == -1)
	{
		return (0);
	}
	if (wr != re)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}
