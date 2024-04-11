#include "main.h"
#include <stdbool.h>

/**
 * _strlen_recursion - it returns the length of a string
 * @s: the string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_rec - checks if a string is a palindrome
 * @s: the string
 * @l: left index of the range
 * @r: right index of the range
 *
 * Return: 1 if the string is palindrome
 * 0 otherwise
 */
int is_palindrome_rec(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] != s[r])
		return (0);
	return (is_palindrome_rec(s, l + 1, r - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if the string is palindrome
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	if (n <= 1)
		return (1);
	return (is_palindrome_rec(s, 0, n - 1));
}
