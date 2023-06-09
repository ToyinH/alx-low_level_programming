#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that accept command argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if successful otherwise return non-zero
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argv == NULL)
	{
		return (2);
	}
	else if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);
		sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
