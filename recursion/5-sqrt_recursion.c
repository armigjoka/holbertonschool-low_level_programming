#include "main.h"
/**
 * _find_sqrt - finding root
 * @n: to check
 * @i: to check
 * Return: Always function.
 */
int _find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i == n / 2 || i * i > n)
		return (-1);
	else
		return (_find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function executor
 * @n: to check
 * Return: function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (_find_sqrt(n, 0));
}
