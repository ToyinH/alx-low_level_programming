#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 *@n: the number of times
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('\\');
			_putchar('\n');
		}
		int b;

		for (b = 1: b <= n; b++)
		{
			_putchar(' ')
		}
		_putchar('\n');
	}
}
