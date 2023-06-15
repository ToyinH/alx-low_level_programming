#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */
char *strncpy_custom(const char *src, int n);

char **strtow(char *str)
{
	int i = 0;
	int word_count = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		while (str[i] = ' ')
		{
			i++;
		}
		if (str[i] != '\0')
		{
			word_count++;
		}
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
	}
}

char **words = (char **)malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
{
	return (NULL);
}

i = 0;
int word_index = 0;

while (str[i] != '\0')
{
	while (str[i] == ' ')
	{
		i++
	}
	if (str[i] != '\0')
{
	int start = i;
	int word_length = 0;
}
while (str[i] != ' ' && str[i] != '\0')
{
	i++;
	word_length++;
}
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
	for (int j = 0; j < word_index; j++)
	{
		free(words[j]);
	}
	free(words);
	return(NULL);
	strncpy_custom(words[word_index], str + start, word_length);
	words[word_index][word_length] = '\0';
	word_index++;
}
words[word_count] = NULL;
return (words);
}

char *strncpy_custom(const char *src, int n)
{
	char *dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
	{
		return NULL;
	}
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	dest[n] = '\0';
	return dest;
}
