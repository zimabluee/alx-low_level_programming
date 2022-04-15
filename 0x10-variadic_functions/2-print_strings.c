#include "variadic-functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - prints strings passed to it
 *@separator: printed between the strings
 *@n: number of strings
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;
	
	va_start(ap, n);	
	while ((i < n) && (n != 0))
	{
		s = va_arg(ap, char *)
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end (ap);
	printf("\n");
}
