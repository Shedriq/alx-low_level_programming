#include "main.h"

/**
 * factorial - prints the factorials of a given number
 * @n: the number to find its factorial
 *
 * Return: the factorial of the number.
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
