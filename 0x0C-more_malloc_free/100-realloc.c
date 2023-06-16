#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: return void pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = (void *)malloc(new_size);
	{
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	if (ptr == NULL)
	{
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
	}
	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
	}

	return (new_ptr);
}
