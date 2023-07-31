#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int cnt1, cnt2, sub;
	
	cnt1 = 0;
	cnt2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sub = (i * size) + j;
			if (i == j)
				cnt1 += a[sub];
			if (i + j + 1 == size)
				cnt2 += a[sub];
		}
	}
	printf("%li, %li\n", cnt1, cnt2);
}
