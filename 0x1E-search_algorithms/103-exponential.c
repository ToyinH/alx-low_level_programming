#include "search_algos.h"
/**
 * exponential_search - A function that searches for a value in a sorted array
 * of integers using the xponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: return the index where value is located
 * or -1 if pointer is NULL or value not found
*/

int exponential_search(int *array, size_t size, int value)
{
	int prev = 1, current = 1;

	if (array[0] == value)
		return (0);
	while (current < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		if (array[current] == value)
			return (current);
		if (array[current] < value)
		{
			prev = current;
			current = current * 2;
			if (array[current] > value)
			{
				return (binary_search1(array, prev, current, value));
			}
		}
		else
		{
			return (binary_search1(array, prev, current - 1, value));
		}
	}
	return (binary_search1(array, prev, current - 1, value));
	return (-1);
}

/**
 * binary_search1 - A function that searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: pointer to the first element of the array to search
 * @left: the beginning of the array
 * @right: the end of the array
 * @value: the value to search for
 * Return: return the index where value is located
 * or -1 if pointer is NULL or value not found
*/

int binary_search1(int *array, int left, int right, int value)
{
	size_t mid;

	printf("Value found between [%d] and [%d]\n", left, right);
	if (array == NULL)
		return (-1);
	print_array(array, left, right);
	if (left == right)
	{
		mid = left + ((right - left) / 2);
		if (value == array[mid])
			return ((int)mid);
		return (-1);
	}
	while (left < right)
	{
		mid = left + ((right - left) / 2);
		if (value == array[mid])
			return ((int)mid);
		/* shift to the left if value is less than the middle value */
		else if (value < array[mid])
		{
			right = mid - 1;
			print_array(array, left, right);
		}
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
