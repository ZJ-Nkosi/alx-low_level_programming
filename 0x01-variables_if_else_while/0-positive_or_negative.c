#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - says whether a number is + or -
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
