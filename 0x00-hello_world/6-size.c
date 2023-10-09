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

	printf("Size of a char: %c byte(s)", sizeof(i));
	printf("Size of a int: %i byte(s)", sizeof(j));
	printf("Size of a long int: %li byte(s)", sizeof(k));
	printf("Size of a long long int: %lli byte(s)", sizeof(l));
	printf("Size of a float: %f byte(s)", sizeof(m));

	return (0);
}
