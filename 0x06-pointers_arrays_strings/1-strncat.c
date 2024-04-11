#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: max characters to take from src
 *
 * Return: char* to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr, *ptr2;
	int i;

	ptr = dest;
	ptr2 = src;
	i = 0;
	while (*ptr != '\0')
		ptr++;
	while (*ptr2 != '\0' && i < n)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
