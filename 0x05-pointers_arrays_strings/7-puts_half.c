#include "main.h"
/**
 * puts_half - print second half of string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
		j++;
	}

	j -= (i / 2);
	
	while (str [j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
