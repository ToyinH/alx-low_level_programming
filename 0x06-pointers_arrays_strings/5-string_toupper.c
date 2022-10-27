#include "main.h"

/**
 * *string_toupper - changes all lowercase of a string to uppercase
 * Return: return uppercase
 *
 */
char *string_toupper(char *s)
{
	int i;
	int j;
	
	for (i = 0; s[i] != ('\0'); i++, j++)
	{
		for (i = j, j = 'a'; j <= 'z'; j++)
		{
			_putchar(j - 32);
		}
	}
}
