#include "main.h"

/**
 * _memset - Fills the first n byte of the memory area pointed to by s with the
 * constant byte b
 *
 * @s: Pointer of type char to memory area.
 * @b: Constant byte of char type.
 * @n: The first count of bytes of memory pointed to by s.
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char t;
	unsigned int i;

	s = &t;

	for (i = 0; i < n; i++)
	{
		*s++ = b; 
	}
	return (s);
}
