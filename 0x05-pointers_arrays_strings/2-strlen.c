#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: character
 * Return: return the string length
 *
 */

int _strlen(char *s)
{
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
