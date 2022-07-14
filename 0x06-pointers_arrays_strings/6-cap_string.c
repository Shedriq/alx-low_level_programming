#include "main.h"

/**
 * *cap_string - capitalizes the first character of words in a string
 * @str: string array
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[++i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
			str[i] -= 32;
	}
	return (str);
}
