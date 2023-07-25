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
	unsigned int i, n, sign;
	int ans;
	bool flag;

	i = 0;
	n = 0;
	sign = 1;
	flag = false;
	while (s[i] != '\0' && !flag)
	{
		if (s[i] == '-')
			sign *= -1;
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
	ans = n * sign;
	return (ans);
}
