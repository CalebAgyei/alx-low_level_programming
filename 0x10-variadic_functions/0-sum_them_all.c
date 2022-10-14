#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: First and fixed parameter of type int.
 *
 * Return: If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = n; i > 0; i = va_arg(ap, const unsigned int))
		sum += i;
	return (sum);
}
