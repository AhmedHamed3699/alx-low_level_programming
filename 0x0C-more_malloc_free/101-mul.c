#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int min;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (ptr);

	if (ptr == NULL)
		return (newPtr);

	min = (new_size < old_size) ? new_size : old_size;
	memcpy(newPtr, ptr, min);

	free(ptr);
	return (newPtr);
}

/**
 * convert_to_string - prints number using _putchar
 * @n: the number to be printed
 *
 * Return: void
 */
void convert_to_string(int n)
{
	if (!n)
		return;

	convert_to_string(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * mult - multiplies to strings
 * @a: first string
 * @b: second string
 * @n: longest size
 *
 * Return: their multiplication
 */
int *mult(char *a, char *b, int n)
{
	int i, j;
	int *product;

	product = malloc((2 * n - 1) * sizeof(*product));
	if (product == NULL)
		return (NULL);

	for (i = 0; i < (2 * n - 1); i++)
		product[i] = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (!isdigit(a[i]) || !isdigit(b[j]))
			{
				free(product);
				return (NULL);
			}
			product[i + j] += ((a[i] - '0') * (b[j] - '0'));
		}
	for (i = (2 * n - 2); i > 0; i--)
	{
		product[i - 1] += product[i] / 10;
		product[i] %= 10;
	}
	return (product);
}


/**
 * reconstruct - it reconstructs string a and b
 * @a: first string
 * @b: second string
 *
 * Return: void
 */
int reconstruct(char **a, char **b)
{
	int diff, i, n;

	if (strlen(*a) > strlen(*b))
	{
		n = strlen(*a);
		diff = n - strlen(*b);
		*b = _realloc(*b, (unsigned int)strlen(*b), (unsigned int)n);
		for (i = n - 1; i >= 0; i--)
		{
			if (i >= diff)
				(*b)[i] = (*b)[i - diff];
			else
				(*b)[i] = '0';
		}
	}
	else
	{
		n = strlen(*b);
		diff = n - strlen(*a);
		*a = _realloc(*a, (unsigned int)strlen(*a), (unsigned int)n);
		for (i = n - 1; i >= 0; i--)
		{
			if (i >= diff)
				(*a)[i] = (*a)[i - diff];
			else
				(*a)[i] = '0';
		}
	}
	return (n);
}

/**
 * main - program entry point
 * @ac: argument count
 * @av: arguments vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int *ans;
	char *a, *b;
	int n, i;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	a = strdup(av[1]);
	b = strdup(av[2]);
	n = reconstruct(&a, &b);

	ans = mult(a, b, n);
	if (ans == NULL)
	{
		printf("Error\n");
		free(ans);
		free(a);
		free(b);
		exit(98);
	}
	i = 0;
	while (i < (2 * n - 1) && ans[i] == 0)
		i++;
	if (i == (2 * n - 1))
		_putchar('0');
	else
	{
		convert_to_string(ans[i]);
		i++;
		for (; i < (2 * n - 1); i++)
			_putchar(ans[i] + '0');
	}
	_putchar('\n');
	free(ans);
	free(a);
	free(b);
	return (0);
}
