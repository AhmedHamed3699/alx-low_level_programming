#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
