#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers.
 * @argc: Count of arguments.
 * @argv: Array of strings.
 *
 * Description: Prints the result of the multiplication, followed by a new line.
 * Assume that the two numbers and result of multiplication can be stored
 * in an integer.
 * If the program does not receive two arguments, print 'Error',
 * followed by a new line, and return 1.
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char **argv)
{
	int x; 
	int y; 

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
 		x = atoi(argv[1]);
 		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}

	return (0);
}
