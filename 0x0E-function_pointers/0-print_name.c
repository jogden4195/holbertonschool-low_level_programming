#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name we are printing
 * @f: the function that will print the name
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *) = f;

	p(name);
}


