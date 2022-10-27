#include "main.h"
/**
 * *_strcat - a function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: 0 if successful
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j, c;

	while (dest[i] != '\0')
	{
		i++;
		c++;
	}
	for (i = c, j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
