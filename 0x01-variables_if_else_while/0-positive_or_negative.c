#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description - get random number, print the number
 * check if number is positive, negative or zero
 * Return is zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
