#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, m, n, total_len;
	int len = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	total_len = len + ac + 1;

	new_str = malloc(total_len * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (m = 0, k = 0; m < ac; m++, k++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			new_str[k] = av[m][n];
		}
		new_str[k] = '\n';
	}
	new_str[k] = '\0';
	return (new_str);
}
