#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: some memory area
 * @b: the constant byte
 * @n: number of bytes to fill
 *
 * Return: char* to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
