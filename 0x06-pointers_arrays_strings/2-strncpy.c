#include main.h
/**
 * _strncpy - copy the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: number of characters being copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
