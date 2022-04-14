#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all parameters
 *@n:number of arguements
 *Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	
	va_list ap;
	if (n ==0)
		return (0);
	
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
	va_end(ap); 
}
