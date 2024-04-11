#include "main.h"
#include <stdbool.h>

/**
 * leet - function that encodes a string into 1337
 * @s: string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int code[128];
	int i;

	code['A'] = 4;
	code['a'] = 4;
	code['E'] = 3;
	code['e'] = 3;
	code['O'] = 0;
	code['o'] = 0;
	code['T'] = 7;
	code['t'] = 7;
	code['L'] = 1;
	code['l'] = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
			s[i] == 'o' || s[i] == 'O' || s[i] == 't' || s[i] == 'T' ||
			s[i] == 'l' || s[i] == 'L')
			s[i] = code[(int) s[i]] + '0';
	}
	return (s);
}
