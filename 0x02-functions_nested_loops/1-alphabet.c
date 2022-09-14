#include "main.h"
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Returns: 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
}
