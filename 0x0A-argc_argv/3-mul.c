#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the result of the multiplication, followed by a new line
 *
 *@argc:arguement count
 *@argv:arguement array
 *Return:0
 */
int main(int argc, char *argv[])
{
	if (argc == 1 || argc == 2)
	{
		printf ("Error");
		return(0);
	}
	int i, j = 0;
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]) * atoi(argv[i+1]);
		printf("%d\n", j);
	}
	return (0);
}
