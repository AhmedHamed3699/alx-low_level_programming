#include "main.h"
#include <stdbool.h>

/**
 * _atoi - convert a string to an integer
 * @s: input string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, n, sign;
	bool flag;

	i = 0;
	n = 0;
	sign = 0;
	flag = false;
	while (s[i] != '\0' && !flag)
	{
		if (s[i] == '+')
			sign++;
		else if (s[i] == '-')
			sign--;
		else if (s[i] >= '0' && s[i] <= '9')
			flag = true;
		if (!flag)
			i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		n *= 10;
		n += s[i] - '0';
		i++;
	}
	if (sign < 0)
		n *= -1;
	return (n);
}
