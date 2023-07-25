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
	int pass[100];
	int *tmp;
	int i;
	char r;
	
	srand(time(0));
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
	i = 0;
	while (pass[i] != '\0')
	{
		printf("%c", pass[i]);
		i++;
	}
	return (0);
}
