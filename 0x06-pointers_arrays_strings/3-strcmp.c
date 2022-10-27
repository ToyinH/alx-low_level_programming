#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: character 1
 * @s2: character 2
 * Return: 0 if same
 *
 */

int _strcmp(char *s1, char *s2)
{
	int f = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			f = 1;
			break;
		}
		else
		{
			return (0);
		}
	}
}
