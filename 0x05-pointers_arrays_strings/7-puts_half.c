#include "main.h"
/**
 * puts_half - a function that prints second half of a string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	j -= i / 2;
	
	while (j != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
