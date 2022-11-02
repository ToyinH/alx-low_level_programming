#include "main.h"
/**
 * *memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
