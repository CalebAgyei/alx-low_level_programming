#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer of type integer
 * @src: any value of type integer
 * Return: the pointer to dest 
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int len = 0;
	/*char a;*/

	for (i = 0; src[i] != '\n'; i++)
	{
		len++;
	}
	for (j = 0; j < len; j++)
	{
		printf("%d: \n", src[j]);
		/* printf("%d", a);*/
	}
	/**dest = a*/

	return (dest);
}
