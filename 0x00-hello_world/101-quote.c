#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - print exactily 'and that piece of art is useful" -
 * Dora Korpar, 2015-10-19,'
 * followed by a new line,
 * to the standard error
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int s = strien ("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
	write(2,
	"and that piece of art is useful - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
