#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a newline
 * @s: pointer of type character
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = (len - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
