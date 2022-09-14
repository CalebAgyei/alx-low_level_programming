#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: any value of type int
 * Return: 0
 */
int _islower(int c)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (c == ch)
		{
			_putchar('1');
		}
		ch++;
	}
	return (0);
}
