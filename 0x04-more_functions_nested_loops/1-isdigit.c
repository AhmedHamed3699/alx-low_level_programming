#include "main.h"

/**
 * _isdigit - checks for a digit character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
