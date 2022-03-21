#include "main.h"
/**
 * rev_string - reverses a string
 * @s: My School
 */
void rev_string(char *s)
{
	int i, j, temp, length;

	for (len = 0; s[len] != '\0'; len++)
		;
	
	length = i;
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
