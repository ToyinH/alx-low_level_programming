#include "main.h"
/**
 * *_memset - function that fills memory with a constanct byte
 * @n: number of bytes of the memory area
 * @b: constant byte
 * @s: pointer to the memory
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = 'b';
	}
	return (s);
}
