#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: any value of type int
 * Return: 0
 */
int _islower(int c)
{
	char ch = 'a';
	char r;

	while (ch <= 'z')
	{
		if (c == ch)
		{
			_putchar('1');
		}
		ch++;
		r = ch;
	}
	if (c != r)
	{
		_putchar('0');
	}
	return (0);
}
