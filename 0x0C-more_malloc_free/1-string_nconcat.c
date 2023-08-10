#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes taken from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, size1, size2, extra;

	size1 = 0;
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		size1++;
		i++;
	}

	size2 = 0;
	i = 0;
	while (s2 && s2[i] != '\0')
	{
		size2++;
		i++;
	}

	extra = (n < size2) ? n : size2;
	newStr = malloc((size1 + extra + 1) * sizeof(*newStr));
	if (newStr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		newStr[i] = s1[i];
	for (i = 0; i < extra; i++)
		newStr[size1 + i] = s2[i];
	return (newStr);
}
