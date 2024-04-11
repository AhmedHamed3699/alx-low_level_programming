#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	char *ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (s);
}
