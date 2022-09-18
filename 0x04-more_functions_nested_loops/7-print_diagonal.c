#include "main.h"

/**
 * print_diagonal - prints a straight line
 * @n: an integer
 * Return:void
 */

void print_diagonal(int n)
{
	char a = ' ';

	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
