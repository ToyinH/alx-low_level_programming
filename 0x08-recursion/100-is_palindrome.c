#include "main.h"
/**
 * is_palindrome - function that checks if a word is a pallindrome
 * @s: string
 * @low: starting from the beginning of the string
 * @high: starting from the end of the string
 * Return: return 1 if a pallindrome and 0 if not
 */

int is_palindrome_helper(char *s, int low, int high);
int strlen_recursion(char *s);

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - function that helps the palindrome function above
 * @s: string
 * @low: starting from the beginning of the string
 * @high: starting from the end of the string
 *
 * Return: 1 if pallindrome and 0 if not
 */
int is_palindrome_helper(char *s, int low, int high)
{
	if (low >= high)
	{
		return (1);
	}
	if (s[low] != s[high])
	{
		return (0);
	}
	return (is_palindrome_helper(s, low + 1, high - 1));
}

/**
 * strlen_recursion - function that returns the len of a string
 * @str: string
 *
 * Return: return string length
 */

int strlen_recursion(char *str)
{
	if (*str != '\0')
	{
		return (1 + strlen_recursion(str + 1));
	}
	else
	{
		return (0);
	}
}

