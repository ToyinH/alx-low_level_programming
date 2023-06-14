#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @s: string
 * Return: return pointer to string
 */
int get_str_len(char *s);
void copy_string(char *dest, char *src);

char *argstostr(int ac, char **av)
{
	int i, j;
	int total_len = 0;
	int position = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += get_str_len(av[i]) + 1; /* +1 to care for new line*/
	}

	new_str = malloc((sizeof(char) * total_len) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		copy_string((new_str + position), av[j]);
		position += get_str_len(av[j]);
		new_str[position++] = '\n';
	}
	new_str[position] = '\0';
	return (new_str);
}
/**
 * get_str_len - function to get string lenght
 * @s: string
 *
 * Return: return string lenght
 */

int get_str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * copy_string - function to copy string
 * @dest: destination string
 * @src: string to copy
 *
 * Return: no return
 */

void copy_string(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
