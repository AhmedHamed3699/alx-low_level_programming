#include "main.h"
#include <stdbool.h>

/**
 * wildcmp - compares two strings
 * The special char * can replace any string
 * (including an empty string)
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the two strings are identical
 * 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int flag;

	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	flag = 1;
	if (*s1 == '\0')
		flag = 0;
	if (flag)
	{
		flag = wildcmp(s1 + 1, s2 + 1);
		if (*s2 == '*')
			flag = flag || wildcmp(s1 + 1, s2);
	}
	if (*s2 == '*')
		flag = flag || wildcmp(s1, s2 + 1);
	return (flag);
}
