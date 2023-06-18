#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: array
 * @n: number of integers to be printed
 *
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 1)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
	}
}
