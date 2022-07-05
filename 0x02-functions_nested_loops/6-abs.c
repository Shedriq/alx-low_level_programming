#include "main.h"

/**
 * _abs - Entry point
 * @n: the number to be computed
 *  Description: This function computes the absolute value of an integer
 *  Return: The absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
