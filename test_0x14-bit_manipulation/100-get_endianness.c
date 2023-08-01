#include "main.h"
/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *ch = (char *)&num;

	if (*ch == 1)
		return (1);
	else
		return (0);
}
