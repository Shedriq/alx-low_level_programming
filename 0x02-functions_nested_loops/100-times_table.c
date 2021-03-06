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
	int a;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			putchar('0');
			for (b = 1; b <= n; b++)
			{
				putchar(',');
				putchar(' ');
				c = a * b;
				if (c <= 9)
				{
					putchar(' ');
					putchar(' ');
				}
				else if (c <= 99)
				{
					putchar(' ');
				}
				printf("%d", c);
			}
			putchar('\n');
		}
	}
}
