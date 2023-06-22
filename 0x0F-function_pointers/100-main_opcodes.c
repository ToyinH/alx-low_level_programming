#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @num_bytes: num of bytes
 *
 * Return: 0 if succesful.
 */
int print_opcodes(int num_bytes);
int main(int argc, char *argv[])
{
	int bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(bytes);
	return (0);
}

/**
 * print_opcodes - function to print opcodes of own function
 * @num_bytes: number of bytes
 *
 * Return: 0 if successful
 */

int print_opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("\n");
	return (0);
}
