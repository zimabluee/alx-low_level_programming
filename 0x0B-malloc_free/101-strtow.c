#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr -  returns a pointer to an array of strings
 *
 *@ac:arguement count
 *@av:arguement vector
 *
 *Return:pointer to a new string or null if empty
 */
char **strtow(char *str)
{
	int i = 0, length = 0;
	char *s;
	
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; str[i] == '\0'; i++)
	{
		length++;
	}
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
