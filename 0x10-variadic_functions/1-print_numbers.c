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
	while (i < n && n != 0)
	{
		printf("%d", va_arg(ap, n));
		if (separator != NULL && i < (n -1))
		{
			printf("%c ", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
