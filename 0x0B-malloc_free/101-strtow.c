#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */
char **allocate_mem(char *s);

char **strtow(char *str)
{
	int i;
	int word_num = 0;
	int position = 0;

	char **grid1 = allocate_mem(str);
	if (grid1 == NULL)
	{
		return (NULL);
	}

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			grid1[word_num][i] = '\0';
			word_num++;
			position = 0;
		}
		else
		{
			grid1[word_num][position] = str[i];
			position++;
		}
	}
	grid1[word_num][position] = '\0';
	grid1[word_num +1] = NULL;
	return (grid1);
}

char **allocate_mem(char *s)
{
	int i;
	int word_count = 0;
	char **grid;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			word_count++;
		}
	}
	grid = (char **)malloc(sizeof(char *) * (word_count + 1)); 
	/* +1 for the NULL element*/
	{
		if (grid == NULL)
		{
			return (NULL);
		}
	}
	return (grid);
}
