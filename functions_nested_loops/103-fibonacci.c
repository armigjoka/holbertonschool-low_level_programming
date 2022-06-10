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
	long sum = 0;

	for (fn = 0; fn < 4000000; fn++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		if (f1 % 2 == 0)
		{

			sum += f1;
		}
	}
	printf("%li\n", sum);

	return (0);
}
