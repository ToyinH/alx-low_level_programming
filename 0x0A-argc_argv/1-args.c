#include "main.h"
#include <stdio.h>
/**
 * main - function that return a prompt command
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		return (1);
	}
	printf("%d\n", argc);
	return (0);
}
