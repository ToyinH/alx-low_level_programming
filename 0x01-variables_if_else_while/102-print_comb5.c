#include <stdio.h>
/**
 * main - main function
 * description: prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination
 * of the numbers 0 and 1
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (i != 98)
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
