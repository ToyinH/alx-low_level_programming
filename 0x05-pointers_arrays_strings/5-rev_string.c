#include "main.h"
/**
 * rev_string - function that reverses a string
 *@s: string
 */
void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		s[j];
	}
}
