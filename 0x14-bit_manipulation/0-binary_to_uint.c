// #include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, reminder, weight;
	weight = 1;
	decimal = 0;
	if (b = NULL)
	{
		return (0);
	}
	while(b != 0)
	{
		reminder = b % 10;
		decimal = decimal + reminder * weight;
		b = b / 10;
		weight = weight * 2;
	}
	return (decimal);
}
