#include "main.h"
/**
 * _atoi - Called from main
 * @s: pointer to char
 * Return: int
 */
int _atoi(char *s)
{
	int i, negative, is_int;
	unsigned int result;

	result = 0;
	negative = 1;
	is_int = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] == '-')
		{
			negative = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			is_int = 1;
		}
	}
	if (is_int == 1)
		return (result * negative);
	else
		return (0);
}
