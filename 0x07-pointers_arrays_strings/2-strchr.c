#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the char to search for
 *
 * Return: pointer to first occurance of c
 * or NULL if it doesn't exist
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
