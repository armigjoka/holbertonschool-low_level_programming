#include "main.h"
/**
* _abs -- entry point
* @n: character that the code will check
* Return: 0 or != 0
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}

