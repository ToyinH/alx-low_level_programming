#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - function that splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	int i = 0;
	int word_count = 0;
	char **words;
	int word_index = 0;
	int word_length = 0;
	int start, j;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}

		if (str[i] != '\0')
		{
			word_count++;

			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}

	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != '\0')
		{
			start = i;

			while (str[i] != ' ' && str[i] != '\0')
			{
				word_length++;
				i++;
			}

		words[word_index] = (char *)malloc(sizeof(char) * (word_length + 1));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str + start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
		}
	}
	words[word_count] = NULL;
	return (words);
}
