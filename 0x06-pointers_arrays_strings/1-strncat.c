#include "main.h"
/**
 * *_strncat - concatenates two strings using n bytes
 * @dest: character
 * @src: character
 * @n: number of bytes
 *
 * Return: return character
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
		c++;
	}
	for (i = c, j = 0; src[j] != '\0'; j++, i++)
	{
		if (j <= n)
		{
			dest[i] = src[j];
		}
	}
}
