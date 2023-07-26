#include "main.h"

/**
 * _strcmp -  compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal
 * negative value if s1 < s2
 * positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	char *ptr, *ptr2;

	ptr = s1;
	ptr2 = s2;
	while (*ptr != '\0' && *ptr2 != '\0')
	{
		if (*ptr != *ptr2)
			return (*ptr - *ptr2);
		ptr++;
		ptr2++;
	}
	return (*ptr - *ptr2);
}
