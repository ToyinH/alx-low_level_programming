#include "main.h"
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
	create_array = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		create_array[i];
	}
	return(create_array);
}
