#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 *@s: string
 */

void print_rev(char *s)
{
	int x, y, len;

	for (x = 0; s[x] != '\0'; x++)
	{
		len = x;
	}
	for (y = len - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
