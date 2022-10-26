#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 *@s: string
 */

void print_rev(char *s)
{
	int x = 0, y;

	while (s[x] != '\0')
		x++;
	for (y = x - 1 ; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
