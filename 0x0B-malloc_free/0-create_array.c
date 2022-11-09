#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * and initiazes it with a specific char
 * @c: character
 * Return: NULL if size = 0, pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	
	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
