#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry
 * @needle: substring
 * @haystack: string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
