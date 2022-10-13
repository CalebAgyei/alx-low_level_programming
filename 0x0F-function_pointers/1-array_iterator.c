#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @array: The array given.
 * @size: Size of the array.
 * @action: Pointer to function.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
