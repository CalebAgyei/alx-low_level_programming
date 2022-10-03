#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 *
 * @s: The string to search through for 'c'.
 * @c: The character to search for
 * Return: A pointer to 'c'.
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
