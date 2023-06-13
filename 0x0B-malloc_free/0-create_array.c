#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * and initiazes it with a specific char
 * @c: character
 * @size: array size
 * Return: NULL if size = 0, pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
