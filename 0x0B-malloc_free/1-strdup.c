#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL if str = NULL, return a pointer to the duplicated
 * string and return NULL if insufficient memory was available
 *
 */
char *_strdup(char *str)
{
	int i = 0;
	int j, strlen;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	strlen = i;

	str2 = malloc(((sizeof(char)) * strlen) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (strlen); j++)
	{
		str2[j] = str[j];
	}
	str2[j] = '\0';

	return (str2);
}
