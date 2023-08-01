#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 *
 * Return: return 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
