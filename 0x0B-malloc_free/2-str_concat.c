#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 * or NULL if something went wrong
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	unsigned int i, size1, size2;

	size1 = 0;
	while (s1 && s1[size1] != '\0')
		size1++;
	size2 = 0;
	while (s2 && s2[size2] != '\0')
		size2++;

	newStr = (char *) malloc(sizeof(char) * (size1 + size2 + 1));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		newStr[i] = s1[i];
	for (i = 0; i < size2; i++)
		newStr[i + size1] = s2[i];
	return (newStr);
}
