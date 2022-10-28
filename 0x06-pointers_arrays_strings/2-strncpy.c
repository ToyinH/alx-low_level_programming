#include "main.h"
/**
 * *_strncpy - string copy with n bytes
 * @dest: string
 * @src: string
 * @n: character to copy
 * Return: edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
