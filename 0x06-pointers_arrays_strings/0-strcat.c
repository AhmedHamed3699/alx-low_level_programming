#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: char* to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr, *ptr2;

	ptr = dest;
	ptr2 = src;
	while (*ptr != '\0')
		ptr++;
	while (*ptr2 != '\0')
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
	}
	*ptr = '\0';
	return (dest);
}
