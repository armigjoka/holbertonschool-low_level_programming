#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints the strings
 * @separator: string to be printed
 * @n: number of strings
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
