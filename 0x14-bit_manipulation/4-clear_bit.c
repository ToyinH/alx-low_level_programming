#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: starting from 0 and from right
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1UL << index));
	return (1);
}
