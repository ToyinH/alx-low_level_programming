#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index starting from 0. note from the right
 * @n: number
 *
 * Return: return bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned int bit_size = sizeof(unsigned int) * 8;

	if (index > (bit_size - 1))
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}
