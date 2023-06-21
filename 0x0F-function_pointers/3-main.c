#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: return 0 if succesful or otherwise
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '*') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
