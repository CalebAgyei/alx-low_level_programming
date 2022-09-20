#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer of type character
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	
	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for (k = ((len - 1) / 2); k < len; k++)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
	}
}
