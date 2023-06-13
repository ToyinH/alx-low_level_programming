#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, strlen1, strlen2, strlen3;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		i++;
	}
	strlen1 = i;

	for (j = 0; s2[j] != '\0'; j++)
	{
		j++;
	}
	strlen2 = j;

	s3 = malloc((sizeof(char) * strlen1) + (sizeof(char) * strlen2) + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}

	strlen3 = strlen1 + strlen2;

	for (k = 0; k < (strlen3); k++)
	{
		if (k <= strlen1)
		{
			s3[k] = s1[k];
		}
		else if (k > strlen1)
		{
			s3[k] = s2[k];
		}
	}
	s3[k] = '\0';

	return (s3);
}
