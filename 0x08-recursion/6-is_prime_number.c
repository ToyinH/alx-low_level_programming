#include "main.h"
/**
 *
 *
 *
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
		return is_prime_helper(n, n/2);
	}
}


int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return 1;
	}
	if (n % i == 0)
	{
		return 0;
	}
	else
	{
		return is_prime_helper(n, i - 1);
	}
}
