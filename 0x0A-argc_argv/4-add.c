#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the result of the addition of all arguments, followed by a new line
 *
 *@argc:arguement count
 *@argv:arguement array
 *Return:0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
