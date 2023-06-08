#include "main.h"
/**
 * is_prime_number - function to return if a number is a prime number
 * @n: the number to be checked
 * @i: the number used to check for the prime number
 * Return: 0 or 1;
 */

int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, n / 2));
	}
}
/**
 * is_prime_helper - function to help the prime function
 * @n: the number to check
 * @i: the divisible number to check the prime number
 * Return: 0 or 1;
 */


int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i - 1));
	}
}
