#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 *@s: string
 */

void print_rev(char *s)
{
	int x = 0;
	int i = 0;

	while (s[x] != '\0')
	{
		x++; /* strlen */
	}

	while (s[i] != '\0')
	{
		x--;
		_putchar(s[x]);
		i++;
	}
	_putchar('\n');
}
