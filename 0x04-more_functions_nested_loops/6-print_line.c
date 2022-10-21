#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: number of times
 * Return: void
 *
 */
void print_line(int n)
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
			_putchar('-');
		}
		_putchar('\n');
	}
}

