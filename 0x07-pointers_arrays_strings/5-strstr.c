#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: substing to search for
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	bool flag;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		flag = true;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				flag = false;
				break;
			}
			j++;
		}
		if (flag)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
