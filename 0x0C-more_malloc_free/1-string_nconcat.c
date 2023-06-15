#include "main.h"
#include <stdlib.h>
/**
 ** string_nconcat - function that concatenates two strings
 *@str: string
 * Return: pointer or NULL
 */

int len(char *str);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int new_string_length;
	char *new_string;
	unsigned int s1_length = len(s1);
	unsigned int s2_length = len(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= s2_length)
	{
		n = s2_length;
	}
	new_string = (char *)malloc(sizeof(char) * (s1_length + n) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}

	new_string_length = s1_length + n;

	for (i = 0, j = 0; i < new_string_length; i++)
	{
		if (i < s1_length)
		{
			new_string[i] = s1[i];
		}
		else
		{
			new_string[i] = s2[j];
			j++;
		}
	}
	new_string[i] = '\0';
	return (new_string);
}
/**
 * len - function which returns lenght of string
 * @str: string
 *
 * Return: return length of string
 */

int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
