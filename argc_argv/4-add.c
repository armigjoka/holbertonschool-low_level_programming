#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: character
 * @argv: array that contains the program arg
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
