#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_numbers - prints numbers followed by newline
 *
 *@separator:string to be printed between numbers
 *@n:number of elements
 *
 *Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, n));
		if (separator != NULL && i < (n -1))
		{
			printf("%c ", separator);
		}
	}
	printf("\n");
	va_end (ap);
}
