#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all -  prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, size;
	char *tmp, *sep;


	size = 0;
	if (format != NULL)
		size = strlen(format);

	va_start(ap, format);
	i = 0;
	sep = "";
	while (i < size)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				tmp = va_arg(ap, char *);
				if (tmp == NULL)
					tmp = "(nil)";
				printf("%s%s", sep, tmp);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
