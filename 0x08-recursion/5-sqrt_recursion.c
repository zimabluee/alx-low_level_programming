#include "main.h"
/**
 * square_root - find the natural square root
 * @i: number
 * @j: incrementor
 *
 * Return: the number found
 */
int _sqrt(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(i + 1, j));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root found
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
