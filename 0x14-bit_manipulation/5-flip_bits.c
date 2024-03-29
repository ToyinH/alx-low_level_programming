#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number1
 * @m: number2
 *
 * Return: return number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int temp;
	unsigned long int exor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		temp = exor >> i;
		if (temp & 1)
			count++;
	}
	return (count);
}
