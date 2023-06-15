#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
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
	return (memory);
}
