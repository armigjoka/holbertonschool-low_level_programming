#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg character
 * @argv: array that contains the program arg
 * Return: 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}