#include "main.h"
/**
 * exit_p - for length
 * @str: string to check
 * @error: number of the error
 * @file_descriptor: number of the file read or wrote
 * Return: 0 or error
 */
int exit_p(int error, char *str, int file_descriptor)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - Process that creates the file
 * @argc: pointer of the filename of the text file that would be read
 * @argv: length of the letters of the textfile
 * Return: 1 or -1
 */
int main(int argc, char *argv[])
{
	int f_d1, f_d2;
	int write_n, read_n;
	char *buffer[1024];
	
	if (argc != 3)
		exit_p(97, NULL, 0);
	f_d2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_d2 == -1)
		exit_p(99, argv[2], 0);
	f_d1 = open(argv[1], O_RDONLY);
	if (f_d1 == -1)
		exit_p(98, argv[1], 0);
	while ((read_n = read(f_d1, buffer, 1024)) != 0)
	{
		if (read_n == -1)
			exit_p(98, argv[1], 0);
		write_n = write(f_d2, buffer, read_n);
		if (write_n == -1)
			exit_p(99, argv[2], 0);
	}
	close(f_d2) == -1 ? (exit_p(100, NULL, f_d2)) : close(f_d2);
	close(f_d1) == -1 ? (exit_p(100, NULL, f_d1)) : close(f_d1);
	return (0);
}
