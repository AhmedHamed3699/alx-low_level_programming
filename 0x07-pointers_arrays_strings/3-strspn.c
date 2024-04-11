#include "main.h"
#include <stdbool.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: that string
 * that the prefix should contain characters only from
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ptr;
	int j, cnt;
	bool flag;

	ptr = s;
	cnt = 0;
	flag = true;
	while (*ptr != '\0' && flag)
	{
		j = 0;
		flag = false;
		while (accept[j] != '\0')
		{
			if (*ptr == accept[j])
			{
				flag = true;
				cnt++;
				break;
			}
			j++;
		}
		ptr++;
	}
	return (cnt);
}
