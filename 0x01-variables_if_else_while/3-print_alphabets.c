#include <stdio.h>
/**
 * main - prints alphabet in first in lower case
 * and then upper case
 * Return: 0 success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('/n');
	return (0)
}
