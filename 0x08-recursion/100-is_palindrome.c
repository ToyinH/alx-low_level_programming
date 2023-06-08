#include "main.h"
/**
 *
 *
 *
 */

int is_palindrome_helper(char *s, int low, int high);
int strlen_recursion(char *s);

int is_palindrome(char *s)
{
	int len;
	len = strlen_recursion(s);

	return is_palindrome_helper(s, 0, len - 1);
}

int is_palindrome_helper(char *s, int low, int high)
{
	if (low >= high)
	{
		return 1;
	}
	if (s[low] != s[high])
	{
		return 0;
	}
	return is_palindrome_helper(s, low + 1, high - 1);
}

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
