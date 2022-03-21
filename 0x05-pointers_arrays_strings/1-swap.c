#include "main.h"
/**
 * swap_int - swap variable values, 'c' is used for temporary storage
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
