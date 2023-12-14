#include "search_algos.h"
/**
 * binary_search - A function that searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: return the index where value is located
 * or -1 if pointer is NULL or value not found
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	print_array(array, left, right);

	if (left == right)
	{
		mid = left + ((right - left) / 2);
		if (value == array[mid])
			return ((int)mid);
		else
			return (-1);
	}

	while (left < right)
	{
		mid = left + ((right - left) / 2);

		/*check the value if it is same as the middle value */
		if (value == array[mid])
			return ((int)mid);

		/* shift to the left if value is less than the middle value */
		else if (value < array[mid])
		{
			right = mid - 1;
			print_array(array, left, right);
		}

		/* shift to the right if otherwise */
		else
		{
			left = mid + 1;
			print_array(array, left, right);
		}
	}

	if (left == right)
	{
		mid = left + ((right - left) / 2);
		if (value == array[mid])
			return ((int)mid);
		else
			return (-1);
	}
	return (-1);
}

/**
 * print_array - function to print an array
 * @array: array to print
 * @left: left index
 * @right: right index
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
