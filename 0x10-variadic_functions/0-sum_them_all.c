#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters
 *
 *@n:no. of arguements
 *
 *Return:sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;
	
	if (n ==0)
	{
		return (0);
	}
	va_start (ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg (ap, int);
	}
	va_end (ap); 
	return (sum);
}
