#include "main.h"
#include <string.h>
/**
 * main - start point
 * it prints _pchar
 *
 * Return: always 0
 */
int main(void)
{
	char to_print[] = "_putchar\n";
	int i;

	for (i = 0; i < (int)strlen(to_print); i++)
		_putchar(to_print[i]);
	return (0);
}

