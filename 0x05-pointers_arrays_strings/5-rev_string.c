#include "main.h"
/**
 * rev_string - function that reverses a string
 *@s: string
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
