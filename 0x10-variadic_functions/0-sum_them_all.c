#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - returns a sum of all its parameters
 *@n - no. of arguments
 *Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
