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
	int sum 0;	
	va_list ap;
	
	if (n == 0)
		return (0);
		
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
		
	va_end(va);
	return (sum);
}
