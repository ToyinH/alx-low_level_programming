#include "main.h"
/**
 * print_numbers - print 0 to 9 followed by a new line
 * Return: 0 if succesful
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
