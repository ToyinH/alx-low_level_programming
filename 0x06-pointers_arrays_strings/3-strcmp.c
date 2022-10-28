#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if same, 1 if s1 is greater and -1 if s1 is less
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i] && s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] != s2[i] && s1[i] < s2[i])
		{
			return (-1);
		}
		else
			return (0);
	}
}
