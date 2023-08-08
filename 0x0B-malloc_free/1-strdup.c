#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string to a new memory
 * @str: string to duplicate
 *
 * Return: pointer to the new string
 * or NULL if something went wrong
 */
char *_strdup(char *str)
{
	char *newStr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;
	size++;

	newStr = (char *) malloc((sizeof(char) * size));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		newStr[i] = str[i];
	return (newStr);
}
