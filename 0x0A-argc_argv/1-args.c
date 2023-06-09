#include <stdio.h>
#include "main.h"

/**
 * main - function that return a prompt command
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argv == NULL)
	{
		return (1);
	}
	printf("%d\n", (argc - 1));
	return (0);
}
