#include "function_pointers.h"

/**
 * print_name -  function that prints a name
 * according to callback function
 * @name: name of the person
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
