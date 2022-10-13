#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array given.
 * @size: Number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Description: int_index returns the index of the first element
 * for which the cmp function does not return 0.
 *
 * Return: If no element matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (i);
}
