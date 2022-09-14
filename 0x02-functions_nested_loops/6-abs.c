#include "main.h"

/**
 *_abs - prints the absolute value of an integer
 * @int: any value of type int
 * Return: Always 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);

	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	return (0);
}
