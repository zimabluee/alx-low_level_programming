#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - block
 * Description: generate a random number, get its last digit and compare it
 * with five
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand()- RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is equal to 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6\n", n, last);
	return (0);
}
