#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: number
 * Return: return a pointer to the allocated memory, if malloc
 * fails, return 98
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(void) * b);
	{
		if (mem == NULL)
			exit(98);
	}
	return (mem);
}
