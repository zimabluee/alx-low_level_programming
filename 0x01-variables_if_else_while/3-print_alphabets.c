#include <stdio.h>
#include <stdlib.h>
/**
 * main - block
 * Description - print the lowercase and uppercase alphabet
 * return - zero
 */
int main(void)
{
	char c ='a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
        }

	c = 'A'
	
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
