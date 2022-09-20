#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer of type character
 * Return: void
 */
void rev_string(char *s)
{
	char ch;
	int i, j;
	int len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = (len - 1) ; j >= 0; j--)
	{
		ch = s[j];
	}
}
