#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer or NULL
 */
int len(char *str);

char *str_concat(char *s1, char *s2)
{
	int k, strlen1, strlen2, strlen3;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	strlen1 = len(s1);
	strlen2 = len(s2);

	s3 = malloc((strlen1 + strlen2 + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}

	strlen3 = strlen1 + strlen2;

	for (k = 0; k < strlen3; k++)
	{
		if (k < strlen1)
		{
			s3[k] = s1[k];
		}
		else
		{
			s3[k] = s2[k - strlen1];
		}
	}
	s3[k] = '\0';

	return (s3);
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
