#include "main.h"

/**
 * _memcpy - opies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy from src
 *
 * Return: char* to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr, *ptr2;
	unsigned int i;

	ptr = dest;
	ptr2 = src;
	i = 0;
	while (i < n)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		i++;
	}
	return (dest);
}
