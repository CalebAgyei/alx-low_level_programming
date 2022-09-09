#include <stdio.h>
/**
 * main - prints the sizes of various type
 * Return: returns 0
 */
int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char is: %c byte(s)\n", (char)sizeof(c));
	printf("Size of an int is: %i byte(s)\n", (int)sizeof(i));
	printf("Size of a long int is: %ld byte(s)\n", (long int)sizeof(ld));
	printf("Size of a long long int is: %lld byte(s)\n", (long long int)
			sizeof(lld));
	printf("Size of a float is: %f byte(s)\n", (float)sizeof(f));
	return (0);
}
