#include "function_pointers.h"

/**
 * print_name - functions that prints a name
 * @name: the name to be printed
 * @f: a pointers to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
