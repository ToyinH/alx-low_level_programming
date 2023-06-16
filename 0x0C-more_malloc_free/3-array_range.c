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
	int *array;
	int i, cells;

	if (min > max)
	{
		return (NULL);
	}
	cells = (max - min) + 1;
	array = (int *)malloc(sizeof(int) * cells);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < cells; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
