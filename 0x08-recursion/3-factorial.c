#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: -1 if n is lower than 0 to indicate error, 1 if 0,
 * otherwise the factorial of the number
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
