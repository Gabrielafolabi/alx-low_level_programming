#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - function that Prints a name.
 * @name: The printed name.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
