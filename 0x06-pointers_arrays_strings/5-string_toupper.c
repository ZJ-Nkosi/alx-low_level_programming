#include "main.h"

/**
 * string_toupper - changes to uppercae
 * @a: the letter
 * Return: the letter
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] > 'a' && a[i] <= 'z'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
