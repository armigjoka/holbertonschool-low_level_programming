#include <stdio.h>
/**
 * main -- entry point
 * Return: 0
 */
int main(void)
{
	long f1 = 1;
	long f2 = 2;
	long fn;
	int num;

	printf("%li, %li", f1, f2);
	for (num = 1; num <= 48; num++)
	{
		fn = f1 + f2;
		printf(", %li", fn);
		f1 = f2;
		f2 = fn;
	}
	printf("\n");

	return (0);
}
