#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 *@n: integer
 */

void reset_to_98(int *n)
{
	int n;

	n = 402;
	_putchar(n);
	*n = 98;
	_putchar(n);
}
