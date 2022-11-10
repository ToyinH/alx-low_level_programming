#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL if str = NULL, return a pointer to the duplicated
 * string and return NULL if insufficient memory was available
 *
 */
char *_strdup(char *str)
{
	int i, b;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str [i] != '\0'; i++)
	{
		a = malloc(i * sizeof(*a) + 1);
		if (a == NULL)
			return (NULL);
	}
	for (b = 0; b < i; b++)
	{
		a[b] = str[c];
		a[b] = '\0'
	}
	return (a);
}
