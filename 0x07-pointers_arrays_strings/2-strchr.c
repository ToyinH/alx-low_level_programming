#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: return pointer to the first occurence of the character
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
			return (0);
	}
}
