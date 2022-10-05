#include <stdio.h>
#include "main.h"

/**
 * main - Creates a program that prints all arguments it receives 
 * @argc: Count of arguments.
 * @argv: Array of strings.
 *
 * Description: All arguments should be printed, including the first one 
 * Only print one argument per line, ending with a new line
 * Return: 0 (Always success).
 */
int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
