#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - prints strings passed to it
 *@separator:printed between the strings
 *@n: number of strings
 *
 *Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	if (n != 0)
	{
		va_start (ap, n);
		for(i = 0; i < n; i++)
		{
			if (va_arg(ap, n) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(ap, n));
			}
			if (separator != NULL && i < (n - 1))
			{
				printf("%c ", separator)
			}
		}
		va_end (ap);
	}
	printf("\n");
}
