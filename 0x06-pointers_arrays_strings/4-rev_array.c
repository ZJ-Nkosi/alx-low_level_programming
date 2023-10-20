#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: first argument
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

	while (j < n--)
	{
		i = a[i];
		a[j] = a[n];
		a[n] = i
	}
}
