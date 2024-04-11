#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: char*
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p1, p2, i, j, carry, tmp;

	p1 = 0, p2 = 0;
	while (n1[p1] != '\0')
		p1++;
	while (n2[p2] != '\0')
		p2++;
	carry = 0, i = 0, p1--, p2--;
	while (i < size_r)
	{
		tmp = carry;
		if (p1 >= 0)
			tmp += n1[p1] - '0', p1--;
		if (p2 >= 0)
			tmp += n2[p2] - '0', p2--;
		if (p1 < 0 && p2 < 0 && tmp == 0)
		{
			r[i] = '\0';
			break;
		}
		r[i] = (tmp % 10) + '0';
		carry = tmp / 10;
		i++;
	}
	if (p1 >= 0 || p2 >= 0 || tmp != 0)
		return (0);

	i--, j = 0;
	while (j < i)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
		i--, j++;
	}
	return (r);
}
