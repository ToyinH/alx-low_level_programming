#include "main.h"

/**
 * more_numbers - 10 times number
 *
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 48; b <= 62; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
