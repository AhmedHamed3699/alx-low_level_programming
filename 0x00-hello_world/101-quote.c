#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 * C program that prints exactly
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * followed by a new line, to the standard error.
 * I am not allowed to use any functions
 * listed in the NAME section of the man (3) printf or man (3) puts
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, strlen(m));
	return (1);
}
