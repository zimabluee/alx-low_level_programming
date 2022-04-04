#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a copy of string
 *
 *@str:string parameter
 *
 *Return:NULL(fail),pointer
 */
char *_strdup(char *str)
{
	int i = 0, length = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		length++;
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[length] = '\0';
	return (s);
}
