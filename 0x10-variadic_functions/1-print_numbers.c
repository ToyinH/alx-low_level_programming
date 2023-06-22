#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers with separator and a new line
 * @separator: string that separate numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (i == (n - 1))
		{
			printf("%d\n", x);
		}
		printf("%d%s", x, separator);
	}
}
