#include "main.h"

/**
 * is_prime - utility recursive function
 * to check if a numbetr is prime
 * @n: the number
 * @i: counter
 *
 * Return: 1 if the number is prime
 * 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 * Return: 1 if the number is prime
 * 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, 2));
}
