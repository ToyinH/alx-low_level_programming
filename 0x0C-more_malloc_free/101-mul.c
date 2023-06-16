#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - multiply two integers
 * @numA: first number
 * @numB: second number
 *
 * Return: return 0 if successful
 */
int mul(int numA, int numB);
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		/*exit(98);*/
		return (1);
	}
	if (!isdigit(num1) || !isdigit(num2))
	{
		printf("Error\n");
		/*exit(98);*/
		return (1);
	}
	result = mul(num1, num2);
	printf("%d\n", result);
	return (0);

}
/*
 * mul- function to multiply two integers
 * @numA: first num
 * @numB: second num
 *
 * Return: return product
 */

int mul(int numA, int numB)
{
	int product;
	product = numA * numB;
	return (product);
}
