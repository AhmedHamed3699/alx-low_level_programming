#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * prints the first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long double f1, f2, f;
	int i;

	f1 = 0;
	f2 = 1;
	for (i = 1; i < 98; i++)
	{
		f = f2 + f1;
		f1 = f2;
		f2 = f;
		printf("%.0Lf, ", f2);
	}
	printf("%.0Lf\n", f + f1);
	return (0);
}
