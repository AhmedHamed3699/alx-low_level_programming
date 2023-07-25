#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 * program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(0));
	char pass[100], *tmp;
	int i;
	char r;

	i = 0;
	tmp = pass;
	r = (rand() % 94) + 33;
	while (i + r < 2772)
	{
		i += r;
		*tmp = r;
		tmp++;
		r = (rand() % 94) + 33;
	}
	*tmp = 2772 - i;
	tmp++;
	*tmp = '\0';
	printf("%s", pass);
	return (0);
}
