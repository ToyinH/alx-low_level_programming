#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - function that concatenates two strings which contains
 * s1 followed by the first n bytes of s2 and null terminated
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: return NULL if function fails else return pointer to memory
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j;
	unsigned int strlen1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;
	a = malloc(sizeof(*a) * (strlen1 + n + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, j = 0; i < (strlen1 + n + 1); i++, j++)
	{
		if (i < strlen1)
			a[i] = s1[i];
		else
			a[i] = s2[j];
	}
	a[i] = '\0';
	return (a);
}
