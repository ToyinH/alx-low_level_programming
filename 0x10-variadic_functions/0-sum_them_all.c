#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all parameters
 * @n: number of parameters
 *
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
