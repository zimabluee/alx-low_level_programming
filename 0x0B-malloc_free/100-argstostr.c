#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *argstostr - concatenates all arguements of a program
 *
 *@ac:argument count
 *@av:argument vector
 *
 *Return:pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, length = 0;

	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length += 1;
	}
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
