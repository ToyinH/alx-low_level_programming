#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		/*loop for space*/
		for (j = size - i; j > 1; j--)
		{
			_putchar(' ');
		}
		/*loop for the hash*/
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
