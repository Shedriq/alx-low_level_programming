#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Entry point
 * @n: Integer input
 * Description: This function prints the n times table
 * Return: 0.
 */

void print_times_table(int n)
{
	int i, j, ret;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0');
			for (i = 1; i <= n; i++)
			{
				ret = i * j;
				if (ret <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(ret + '0');
				}
				else if (ret > 9 && ret <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ret / 100 + '0');
					_putchar((ret / 10) % 10 + '0');
					_putchar(ret % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
