#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints a random number and determines whether it is
 * zero, negative or positive
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
/*        srand(time(0));
        n = rand() - RAND_MAX / 2;
*/
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
}
