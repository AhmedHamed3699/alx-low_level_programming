#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: number of arguments passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *tmp;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ap, char *);
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
