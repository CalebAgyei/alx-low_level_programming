#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes
 * it with a specific char.
 * @size: Size of the array.
 * @c: Specific char to use to initalize the array.
 *
 * Return: NULL if size = 0, otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str != NULL)
	{
		for (i = 0; i < size; i++)
			str[i] = c;
	}
	return (str);
	free(str);
}
