#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *Description:prints the alphabet
 *
 *Return: Always 0 (successful)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
