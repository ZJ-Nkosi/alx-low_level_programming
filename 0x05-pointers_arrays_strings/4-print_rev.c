#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i;

	while (j != 0)
	{
		j--;
		_putchar(s[j]);
	}
	_putchar(s[j]);
	_putchar('\n');


}
