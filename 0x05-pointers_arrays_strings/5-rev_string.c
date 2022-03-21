#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 */

void rev_string(char *s)
{

int length, i, half;
char temp;

for (length = 0; s[length] != '\0'; length++)
;

i = 0;

half = length / 2;

while (half--)
{
	temp = s[length - i - 1];
	s[length - i - 1] = s[i];
	s[i] = temp;
	i++;
}

}
