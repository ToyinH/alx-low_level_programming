#include <stdio.h>
/**
 * main - different combination of two digit numbers
 * numbers separated by , and followed by a space
 * the two digits must be different
 * print only the smallest combination of two digits
 * in ascending order
 * using putchar
 * Return: 0 if successful
 */

int main(main)
{
	int n,m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m !=57)
				{	
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
