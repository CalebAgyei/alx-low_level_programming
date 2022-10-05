#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Description: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1, followed
 * by the contents of s2, and null terminated.
 * If NULL is passed, treat it as an empty string.
 * Return: Pointer to newly allocated space in memory (Success) or
 * NULL (Failure).
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int j = 0;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	/**
	 * Another way of determining the length of the two strings in one statement
	 * for (i = 0; s1[i] || s2[a]; i++)
	 *		length++
	 */

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] ; i++)
	{
		concat_str[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		concat_str[j++] = s2[i];
	}
	return (concat_str);
}
