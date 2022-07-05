#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * Description: This function prints the last digit of a number
 * @n: the integer to be processed
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int a = (n % 10);

	if (a < 0)
	{
		a = (a * -1);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}
