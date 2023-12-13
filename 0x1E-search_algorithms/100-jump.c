#include <math.h>
#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: return the index where value is located
 * or -1 if pointer is NULL or value not found
*/

int jump_search(int *array, size_t size, int value)
{
	int i, jump = sqrt(size), prev = 0, current = jump;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (current && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += jump;
		if (current > (int)size - 1)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (i = prev; i <= (current < (int)size - 1 ? current : (int)size - 1); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
