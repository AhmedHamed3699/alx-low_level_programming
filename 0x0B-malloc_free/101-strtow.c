#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: the whole string
 *
 * Return: pointer to the array of strings
 * or NULL if something went wrong
 */
char **strtow(char *str)
{
	char **strArr;
	int i, j, k, size, tmp;

	if (str == NULL || *str == '\0')
		return (NULL);
	size = 1;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			size++;

	if (size == 1)
		return (NULL);
	strArr = (char **) malloc(sizeof(char *) * size);
	if (strArr == NULL)
		return (NULL);

	tmp = 0;
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			tmp++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			strArr[j] = (char *) malloc(sizeof(char) * (tmp + 1));
			if (strArr[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(strArr[j]);
				free(strArr);
				return (NULL);
			}
			for (k = 0; k < tmp; k++)
				strArr[j][k] = str[(i - tmp + 1) + k];
			tmp = 0;
			j++;
		}
	}
	strArr[j] = NULL;
	return (strArr);
}
