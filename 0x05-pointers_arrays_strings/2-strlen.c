#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer of type character
 * Return: void
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}


	return (len);
}
