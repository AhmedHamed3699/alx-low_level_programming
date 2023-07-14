#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * prints the last digit of n
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("Last digit of %i is %i ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit < 6)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");

	return (0);
}