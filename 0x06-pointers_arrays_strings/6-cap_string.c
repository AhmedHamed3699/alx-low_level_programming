#include "main.h"
#include <stdbool.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;
	bool flag;

	flag = true;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && flag)
		{
			s[i] -= 32;
			flag = false;
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
			s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
			s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\t' ||
			s[i] == '\n')
			flag = true;
		else
			flag = false;
	}
	return (s);
}
