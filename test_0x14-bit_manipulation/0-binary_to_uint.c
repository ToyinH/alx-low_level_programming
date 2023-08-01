#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @x: number
 * @y: number
 *
 * Return: return the integer of binary number
 */
unsigned int power(unsigned int x, unsigned int y);
unsigned int binary_to_uint(const char *b)
{
	unsigned int lent = 0, i = 0, j = 0, sum = 0, value, z, p;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		lent++;
		i++;
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		z = lent - 1 - j;
		p = power(2, z);
		value = (b[j] - '0') * p;
		sum += value;
	}
	return (sum);
}

/**
 * power - function that finds x raised to power of y
 * @x: integer
 * @y: integer
 *
 * Return: return x power of y
 */
unsigned int power(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * power(x, y - 1));
}
