#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Name to be printed.
 * @f: Pointer to the function that prints the name.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	(*f)(name); /* Same as f(name) */
}
