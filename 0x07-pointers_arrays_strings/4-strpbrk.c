#include "main.h"
#include <stddef.h>
#include <stdbool.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to check in
 * @accept: string to check for
 *
 * Return: a pointer to the first occurance
 * or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	int j;

	ptr = s;
	while (*ptr != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*ptr == accept[j])
				return (ptr);
			j++;
		}
		ptr++;
	}
	return (NULL);
}
