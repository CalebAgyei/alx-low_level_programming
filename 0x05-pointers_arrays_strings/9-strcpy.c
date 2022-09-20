#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer of type integer
 * @src: any value of type integer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char a;
	char b;
	int i;
	int j;
	int len = 0;
	src = &a;
	dest = &b;

	for (i = 0; a[i] != '\n'; i++)
	{
		len++;
	}
	for (j = 0; j < len; j++)
	{
		b[j] = a[j]; 
	}

	return (dest);
}
