#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string
 *
 *
 */

void _puts_recursion(char *s) /* function that prints a string */
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
