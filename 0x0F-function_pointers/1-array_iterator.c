#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with 'cmp', or -1 if none
 * found
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
