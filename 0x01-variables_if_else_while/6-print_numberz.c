#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * using putchar
 * Return: 0 successful
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
