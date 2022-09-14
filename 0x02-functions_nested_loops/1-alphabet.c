#include "main.h"
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Returns: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
