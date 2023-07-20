#include <stdio.h>

/**
 * main - code entry
 * get largest prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n, i, ans;

	n = 612852475143;
	i = 2;
	ans = 1;
	while (i * i <= n)
	{
		while (n % i == 0)
		{
			n /= i;
			ans = i;
		}
		i++;
	}
	if (n != 1)
		ans = n;

	printf("%ld\n", ans);
	return (0);
}
