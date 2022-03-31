#include "main.h"
/**
 *prime_check - returns 1 if n is prime
 *@i: input
 *@j:input
 *Return:1 - prime ,0 - otherwise
 *
 */
int prime_check(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (j > i / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(i + 1, j));
	}
}
/**
 *is_prime_number - returns 1 if a number is prime
 *
 *@n:input
 *Return: 1-prime,0-otherwise
 *
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_check(2, n));
}
