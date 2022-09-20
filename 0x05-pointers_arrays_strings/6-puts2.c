#include "main.h"

/**
 * puts2 - prints every other
 * @str: pointer of type character
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
