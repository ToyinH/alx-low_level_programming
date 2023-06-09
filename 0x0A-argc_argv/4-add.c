#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int i, j, x;
	int sum = 0;

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
		char *str = argv[i];

		for (j = 0; str[j] != '\0'; j++)
		{
			if (!isdigit(str[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		x = atoi(str);

		if (x > 0)
		{
			sum += x;
		}
		else
		{
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
