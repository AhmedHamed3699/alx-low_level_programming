#include "main.h"

/**
 * _strncpy - copies a string to another
 * @dest: destination string
 * @src: source string
 * @n: max characters to copy from src
 *
 * Return: char* to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr, *ptr2;
	int i;

	ptr = dest;
	ptr2 = src;
	i = 0;
	while (*ptr2 != '\0' && i < n)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		i++;
	}
	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}
	return (dest);
}
