#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = src[i];

	return (dest);
}
