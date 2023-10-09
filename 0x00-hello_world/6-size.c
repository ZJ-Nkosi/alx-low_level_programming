#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 * Return: 0
 */

int main(void)
{
	char i;
	int j;
	long k;
	long long l;
	float m;

	printf("Size of a char: %i byte(s)\n", sizeof(i));
	printf("Size of a int: %i byte(s)\n", sizeof(j));
	printf("Size of a long int: %i byte(s)\n", sizeof(k));
	printf("Size of a long long int: %i byte(s)\n", sizeof(l));
	printf("Size of a float: %i byte(s)\n", sizeof(m));

	return (0);
}
