#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n : any value of type int
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	_putchar(num);
	return (0);
}
