#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 *
 * Return: return integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int digit;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
		}
		if (s[i] == '+')
		{
			i++;
		}
		if (s[i] == '-')
		{
			sign = sign * (-1);
			i++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			result = (result * 10) + digit;
			i++;
		}
	}
	return (sign * result);
}
