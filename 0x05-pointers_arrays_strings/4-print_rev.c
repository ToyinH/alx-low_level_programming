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
	for (y = len; y >= 0; y--)
	{
		if (y = 0)
		{
			return (void);
		}
		_putchar(s[y]);
	}
	_putchar('\n');
}
