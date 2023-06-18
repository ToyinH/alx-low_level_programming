#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 *@s: string
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++; /* strlen */
	}
	while (*s != '\0')
	{
		x--;
		_putchar(s[x]);
	}
	_putchar('\n');
}
