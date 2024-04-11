#include "main.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int code[128];
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		code[i] = ((i + 13) / 91) * 65;
		code[i] += ((i + 13) % 91);
		code[i + 32] = ((i + 45) / 123) * 97;
		code[i + 32] += ((i + 45) % 123);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = code[(int) s[i]];
	}
	return (s);
}
