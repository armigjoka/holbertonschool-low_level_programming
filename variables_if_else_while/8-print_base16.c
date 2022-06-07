#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char I;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (I = 'a'; I <= 'f'; I++)
	{

		putchar(I);
											}
	putchar('\n');
	return (0);
}
