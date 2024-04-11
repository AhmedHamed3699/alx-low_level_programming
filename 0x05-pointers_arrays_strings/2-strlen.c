#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: pointer to the string
 *
 * Return: int - length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
