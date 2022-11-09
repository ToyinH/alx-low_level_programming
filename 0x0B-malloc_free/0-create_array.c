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
	int i;
	char *a;
	a = malloc(size * sizeof(char));

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		a[i];
	}
	return(a);
}
