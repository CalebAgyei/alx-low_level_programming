#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer of type integer
 * @src: str to be copied, of type integer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;
	int len = 0;

	/* find the length of string in src */
	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		/* copy src into dest*/
		dest[j] = src[j]; 
	}
	dest[i] = '\0';

	return (dest);
}
