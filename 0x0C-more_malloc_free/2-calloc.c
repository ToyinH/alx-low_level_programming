#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements of array
 * @size: size of each element
 *
 * Return: return void pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_byte;
	void *memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_byte = nmemb * size;
	memory = (void *)malloc(total_byte);
	if (memory == NULL)
	{
		return (NULL);
	}
	memset(memory, 0, total_byte);
	return (memory);
}
