#include <stdio.h>
#include "main.h"

/**
 * main - Creates a program that prints its name, followed by a new line.
 * @argc: Count of arguments.
 * @argv: Array of strings.
 *
 * Description: If the program is renamed, it will print the new name,
 * without having to compile it again. You should not remove the path
 * before the name of the program.
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
