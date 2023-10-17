#include "main.h"

/**
 * swap_int - swaps to integers
 * @a: 1st
 * @b: 2nd
 */

void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}
