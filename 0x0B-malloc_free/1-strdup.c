#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string given.
 *
 * Description: The _strdup() function returns a pointer to
 * a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 * Return: NULL if str = NULL.
 * On success, the _strdup function returns a pointer to
 * the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ch;
	int i;
	int strlen = 0;

	for (i = 0; str[i] != '\0'; i++)
		strlen++;

	ch = malloc(sizeof(char) * strlen);

	if (str == NULL)
	{
		return (NULL);
	}
	if (ch != NULL)
	{
		for (i = 0; i < strlen; i++)
			ch[i] = str[i];
	}
	return (ch);
}
