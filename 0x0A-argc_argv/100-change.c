#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins to make change for an amount of money
 *
 *@argc:argument count
 *@argv:argument vector
 *
 *Return:0(success)
 *
 */
int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (amount % 25 >= 0)
	{
		coins = amount / 25;
		amount = amount % 25;
	}
	if (amount % 10 >= 0)
	{
		coins += amount / 10;
		amount = amount % 10;
	}
	if (amount % 5 >= 0)
	{
		coins += amount / 5;
		amount = amount % 5;
	}
	if (amount % 2 >= 0)
	{
		coins += amount / 2;
		amount = amount % 2;
	}
	if (amount % 1 >= 0)
	{
		coins += amount / 1;
	}
	printf("%d\n", coins);
	return (0);
}
