#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n >= '9'; n--)

	{
		putchar (n);
	}
	for (n = 'a'; n >= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
