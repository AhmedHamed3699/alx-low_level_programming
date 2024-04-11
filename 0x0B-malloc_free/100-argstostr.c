#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: pointer to the concatenated string
 * or NULL if something went wrong
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	args = (char *) malloc(sizeof(char) * size);
	if (args == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k] = '\n';
		k++;
	}
	return (args);
}
