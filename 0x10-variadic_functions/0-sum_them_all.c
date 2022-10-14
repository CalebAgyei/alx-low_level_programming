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
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n); /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int); /* Get the next
		argument value. */

	va_end(ap); /* Clean up. */
	return (sum);
}
