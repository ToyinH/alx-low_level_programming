#include "main.h"

/**
 * *string_toupper - changes all lowercase of a string to uppercase
 * @s: character
 * Return: return uppercase
 *
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != ('\0'); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
