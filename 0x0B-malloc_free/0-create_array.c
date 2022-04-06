#include <holberton.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates array of chars initializes it to a specific char
 *@size:intended size
 *@c:character
 *
 *Return:Null,sointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * size);
	if (!s)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
