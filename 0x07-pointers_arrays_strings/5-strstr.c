#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: string where the search is made
 * @needle: string whose occurrence is searched in haystack
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
