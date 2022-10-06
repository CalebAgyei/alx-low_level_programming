#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: Count of arguments.
 * @argv: Array of strings.
 *
 * Description: Prints the result of the, followed by a new line.
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers
 * can be stored in an int
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char **argv)
{
	char *ptr;
	int i;
	int j;
	int len;
	int sum;

	if (argc > 2)
		printf("%d\n", 0);

	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(ptr[j]) == 0)
				{
					printf("Error\n");
					return (1);

				}
				else
					sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
