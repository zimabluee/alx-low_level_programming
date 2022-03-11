#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description - prints all alphabet except e and q
 *
 * Return - zero
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
