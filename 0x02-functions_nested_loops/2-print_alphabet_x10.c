#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}
}
