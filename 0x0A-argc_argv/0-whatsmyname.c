#include "main.h"
#include <stdio.h>

/**
 * main - function that takes command line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful or 1 if not
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		return 1;
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return 0;
}
