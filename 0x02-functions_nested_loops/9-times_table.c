#include "main.h"

/**
 * times_table - Entry point
 * Description: This function prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
	long int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int ret = i * j;

			if (ret <= 9)
			{
				_putchar(ret + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((ret / 10) + '0');
				_putchar((ret % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
