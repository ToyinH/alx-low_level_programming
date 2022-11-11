#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of intergers
 * @min: min value
 * @max: max value
 * Return: return the pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
