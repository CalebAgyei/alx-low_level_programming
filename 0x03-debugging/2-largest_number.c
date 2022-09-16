#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	/* int largest; */ 

	if ((x > y) && (y > z))
	{
		printf("%d\n", x);
	}
	else if ((y > x) && (x > z))
	{
		printf("%d\n", y);
	}
	else if ((z > x) && (x > y))
	{
		printf("%d\n", z);
	}
	/* additional code */
	else if ((x == y) && (x == z))
	{
		printf("%d\n", x);
	}
	else if ((x == y) && (x > z))
	{
		printf("%d\n", x);
	}
	else if ((x == z) && (x > y))
	{
		printf("%d\n", x);
	}
	else if ((y == z) && (y > x))
	{
		printf("%d\n", y);
	}


	return (0);
}
