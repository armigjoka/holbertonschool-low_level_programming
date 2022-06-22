#include<stdio.h>

/**
 * main - start
 * @argc: arg count
 * @argv: arg array
 * Printing all the Arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	return(0);
}
