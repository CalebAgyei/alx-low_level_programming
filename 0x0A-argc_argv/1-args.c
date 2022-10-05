#include <stdio.h>
#include "main.h"

/**
 * main - Creates a program that prints the number of arguments
 * passed into it, followed by a new line.
 * @argc: Count of arguments.
 * @argv: Array of strings.
 *
 * Return: 0 (Always success).
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
