#include "main.h"
/**
 * _find_prime - finding root
 * @n: to check
 * @i: to check
 * Return: Always function.
 */
int _find_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (_find_prime(n, i + 1));
}



/**
 * is_prime_number - function executor
 * @n: to check
 * Return: function
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	else
		return (_find_prime(n, i));
}
