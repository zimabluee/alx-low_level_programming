#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *Description: prints whole alphabet in lowercase except q and c
 *
 *Return: Always zero(successful)
 *
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
