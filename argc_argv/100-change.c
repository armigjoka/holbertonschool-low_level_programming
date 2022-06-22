#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: check character
 * @argv: print the character
 * Return: 0, 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	i = atoi(argv[1]);
	num_coins += i / 25;
	i = i % 25;
	num_coins += i / 10;
	i = i % 10;
	num_coins += i / 5;
	i = i % 5;
	num_coins += i / 2;
	i = i % 2;
	num_coins += i / 1;

	printf("%d\n", num_coins);
	return (0);
}
