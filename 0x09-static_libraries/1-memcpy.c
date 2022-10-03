#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: Memory area to copy n bytes to.
 * @src: Memory area to copy n bytes from.
 * @n: Count of bytes to be copied from src to dest.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
