#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int bit_size, i;
	unsigned long int unmask;
	int count = 0;

	bit_size = sizeof(unsigned long int) * 8;
	
	for (i = (bit_size - 1); i >= 0; i--)
	{
		unmask = n >> i;
		if (unmask & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
