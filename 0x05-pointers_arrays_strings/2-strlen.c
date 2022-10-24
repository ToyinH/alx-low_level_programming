#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: character
 * @i: number or length
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(i);
	return (0);
}
