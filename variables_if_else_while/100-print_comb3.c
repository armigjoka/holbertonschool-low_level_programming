#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int I;

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i);
		putchar (I);
		if (i < '8')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
