#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - function that receives command argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful or otherwise
 */

int main(int argc, char *argv[])
{
	if (argv == NULL)
	{
		return (2);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		printf("%d\n", (x * y));
	}
	return (0);
}
