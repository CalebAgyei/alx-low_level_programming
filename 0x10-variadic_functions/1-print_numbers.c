#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Description: You are allowed to use printf.
 * If separator is NULL, don't print it.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < (n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
