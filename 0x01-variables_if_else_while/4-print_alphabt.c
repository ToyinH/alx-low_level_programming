#include <stdio.h>

/**
 * main - print alphabets in lower case except q and e 
 * Return: 0 successful
 */

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch != q && ch !=e)
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
