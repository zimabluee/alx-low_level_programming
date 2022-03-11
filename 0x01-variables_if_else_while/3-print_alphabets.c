#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (successful)
 *
 *Description: prints the alphabet in uppercase and lowercase
 */
int main(void)
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
