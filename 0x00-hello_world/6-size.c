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

	printf("Size of a char: %c byte(s)\n", sizeof(i));
	printf("Size of a int: %i byte(s)\n", sizeof(j));
	printf("Size of a long int: %li byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(l));
	printf("Size of a float: %f byte(s)\n", sizeof(m));

	return (0);
}
