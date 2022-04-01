#include "main.h"
#include <stdio.h>
/**
 *main - print one argument per line
 *@argc:arguement count
 *@argv:arguement vector
 */
int main(int argc, char *argv[])
{
	int i;
	for(i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
