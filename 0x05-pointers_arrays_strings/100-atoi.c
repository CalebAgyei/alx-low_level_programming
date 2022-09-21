#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int h;
	int i;
	int len = 0;
	int p;


	for (h = 0; s[h] != '\0'; h++)
	{
		len++;
	}

	if (len != 1)
	{
		for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		{
			p = (int)(s[i]);
		}
	}
	return (0);
}
