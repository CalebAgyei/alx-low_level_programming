#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: You are allowed to use printf.
 * If separator is NULL, don't print it (the separator).
 * If one of the strings is NULL, print (nil) instead.
 * Print a new line at the end of your function.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (ap != NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		else
		{
			printf("(nil)");
		}
		if (i < (n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
