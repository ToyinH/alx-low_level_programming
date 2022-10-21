#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: number of times
 *
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('-');
	}
	_putchar('\n');
}

