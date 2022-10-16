#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * separated by ',' followed by a space using putchar
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		putchar(',');
		putchar(' ');
	}
	return (0);
}
