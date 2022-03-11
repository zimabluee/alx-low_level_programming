#include <stdio.h>
#include <stdlib.h>
/**
 * main - block
 *
 * Description - print alphabet 'a' to 'z'
 *
 * Return value always zero
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar("\n");
	return (0);
}
