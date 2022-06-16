#include "main.h"

/**
 * cap_string - entry
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
			if (str[i]>= 'a' && str[i] <= 'z')
				str[i] = -32;
		if (str[i] == ' ' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i] = -32;
		}
	}
	return (str);
}
