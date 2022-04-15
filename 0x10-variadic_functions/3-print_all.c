#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_all - prints any type of character
 *@format: type of argument
 *Return: void
 */
void print_all (const char *const format, ...)
{
	va_list ap;
	char *s;
	int i = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			printf("%s", s);
			break;
		default:
			continue;
	    }
		if (format[i])
		{
			printf (", ");
		}
	}
    printf("\n");
    va_end(ap);
}
