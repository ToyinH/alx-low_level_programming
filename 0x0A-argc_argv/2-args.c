#include <stdio.h>
#include "main.h"

/**
 * main - function that accept command arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful and 1 if not
 */

int main(int argc, char *argv[])
{
	int i;

	if (argv == NULL)
	{
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
