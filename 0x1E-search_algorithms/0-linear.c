#include "search_algos.h"
/**
 * linear_search - A function that searches for a value in an array of integers
 * using the linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: return the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
