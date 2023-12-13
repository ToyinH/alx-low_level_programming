#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: array to search
 * @value: value to search
 * @size: size of array
 * Return: return index or -1 if not found or array is null
*/



int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)(size - 1);
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
	 * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		/* Estimate the position using interpolation formula */
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos); /* Target found at position pos */
		}

		if (array[pos] < value)
		{
			low = pos + 1; /*Update the search range to the right */
		}
		else
		{
			high = pos - 1; /* Update the search range to the left */
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
