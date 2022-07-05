#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Description: Write a function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 0 or 1.
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
