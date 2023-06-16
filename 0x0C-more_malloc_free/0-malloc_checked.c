#include "main.h"
#include <stdlib.h>
/**
 ** malloc_checked - function that allocates memory using malloc
 * @b: number
 *
 * Return: return a pointer to the allocated memory, if malloc
 * fails, return 98
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory =(void *)malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
