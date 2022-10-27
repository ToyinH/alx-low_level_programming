#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first character
 * @s2: second character
 * Return: 0 if same
 *
 */

int _strcmp(char *s1, char *s2)
{
	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
