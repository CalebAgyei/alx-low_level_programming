#include "main.h"

/**
 * _strcat - concatenates two strings, appends src string to dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; (src[i] != '\0'); i++)
	{
		dest += src[i];
	}
	return (dest);
}
